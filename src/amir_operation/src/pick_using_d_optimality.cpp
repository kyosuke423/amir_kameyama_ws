#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "behavior_tree_msgs/action/pick.hpp"
#include "behavior_tree_msgs/action/move_arm.hpp"
#include "behavior_tree_msgs/action/grasp.hpp"
#include "behavior_tree_msgs/action/place.hpp"
#include "behavior_tree_msgs/msg/object_array.hpp"

#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/pose_with_covariance_stamped.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "bebop_msgs/msg/box_corner.hpp"
#include "ar_track_alvar_msgs/msg/alvar_markers.hpp" //ROS1(メカナムカメラのARマーカー)と共通のメッセージ

#include <iostream>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>

#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Geometry>
#include <cmath>
#include <math.h>

#include "ros2_aruco_interfaces/msg/aruco_markers.hpp"

using PickAction = behavior_tree_msgs::action::Pick;
using MoveArmAction = behavior_tree_msgs::action::MoveArm;
using GraspAction = behavior_tree_msgs::action::Grasp;
using PlaceAction = behavior_tree_msgs::action::Place;

rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr base_pose_sub_;//サポートロボット座標系のオブジェクトの位置をサブスクライブ
// rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_; //サポートロボットのodomをサブスクライブ
rclcpp::Subscription<bebop_msgs::msg::BoxCorner>::SharedPtr box_corner_sub_; //Boxの角の位置座標をサブスクライブ
// rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr amir_odom_sub_; //AMIRのodomをサブスクライブ
rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr amir_pose_sub_; //AMIRのposeをサブスクライブ(Little SLAMを使った自己位置)
rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr mecanum_pose_sub_; //AMIRのposeをサブスクライブ(Little SLAMを使った自己位置)
rclcpp::Subscription<behavior_tree_msgs::msg::ObjectArray>::SharedPtr sub_object_pose_; //AMIRのカメラ座標系でのオブジェクト位置
// rclcpp::Subscription<ros2_aruco_interfaces::msg::ArucoMarkers>::SharedPtr aruco_sub_; //ArucoMaker
// rclcpp::Subscription<ar_track_alvar_msgs::msg::AlvarMarkers>::SharedPtr alvar_sub_; //ArucoMaker（メカナムから受け取るARマーカー）

rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr destination_pub_; //マニピュレーターの移動先をパブリッシュ

geometry_msgs::msg::PoseStamped basePose;
// nav_msgs::msg::Odometry odom;
// nav_msgs::msg::Odometry amir_odom;
geometry_msgs::msg::PoseStamped amir_pose; //Little SLAMから取得するAMIRの位置
geometry_msgs::msg::PoseStamped mecanum_pose; //Little SLAMから取得するAMIRの位置

Eigen::Vector3d transformed_position; //プライマリーロボット座標系に変換後のオブジェクトの位置
Eigen::Vector3d transformed_position_odom; //メカナムとアミルのodomを使った座標変換によるオブジェクトの位置
Eigen::Vector3d transformed_attitude; //プライマリーロボット座標系に変換後のオブジェクトの姿勢
Eigen::Vector3d object_attitude(0,0,0); //初期化
geometry_msgs::msg::PoseStamped destination_position; //マニピュレーターの移動先の座標
bebop_msgs::msg::BoxCorner corner;

behavior_tree_msgs::msg::ObjectArray amir_camera_object;
geometry_msgs::msg::PoseStamped amir_bese_object;

// ArucoMaker
// ros2_aruco_interfaces::msg::ArucoMarkers aruco_posi; //カメラ座標系でのArucoMakerの位置
// geometry_msgs::msg::PoseStamped amir_position_aruco;
// double aruco_world_posi_x = 3.0; //実験環境でのArucoMakerの位置x
// double aruco_world_posi_y = -0.5; //実験環境でのArucoMakerの位置y
// double amir_attitude;

// Ar_track_alvar
// ar_track_alvar_msgs::msg::AlvarMarkers alvar_markers_posi; //カメラ座標系でのArucoMakerの位置
// geometry_msgs::msg::PoseStamped amir_position_alvar;
// double aruco_yaw_offset;
// int alvar_id;

// AMIRから見たARマーカー1の位置
// double amir_to_marker_x_1 = -0.025;
// double amir_to_marker_y_1 = -0.13;
// double amir_to_marker_z_1 = 0.28;

// AMIRから見たARマーカー2の位置
// double amir_to_marker_x_2 = 0.16;
// double amir_to_marker_y_2 = 0.00;
// double amir_to_marker_z_2 = 0.32;

// AMIRから見たARマーカー3の位置
// double amir_to_marker_x_3 = -0.025;
// double amir_to_marker_y_3 = 0.13;
// double amir_to_marker_z_3 = 0.28;

// double aruco_roll, aruco_pitch, aruco_yaw;


double distance_object = 0.5; //マニピュレーターの移動先と対象物の距離の設定

class PickServer : public rclcpp::Node
{
public:
    PickServer() : Node("pick_server")
    {
        // Pickアクションサーバーを作成
        action_server_ = rclcpp_action::create_server<PickAction>(
            this,
            "d_pick",
            std::bind(&PickServer::handle_goal, this, std::placeholders::_1, std::placeholders::_2),
            std::bind(&PickServer::handle_cancel, this, std::placeholders::_1),
            std::bind(&PickServer::handle_accepted, this, std::placeholders::_1));

        // MoveArmアクションクライアントを作成
        move_arm_client_ = rclcpp_action::create_client<MoveArmAction>(this, "amir/bt_move_arm");
        // Graspアクションクライアントを作成
        grasp_client_ = rclcpp_action::create_client<GraspAction>(this, "amir/bt_grasp");
        // Placeアクションクライアントを作成
        place_client_ = rclcpp_action::create_client<PlaceAction>(this, "/place");

        //Publisherの作成
        ///amir/destination：マニピュレーターの移動先
        destination_pub_ = this->create_publisher<geometry_msgs::msg::PoseStamped>("/amir/destination", 10);

        //Subscriberの作成
        //base_pose：対象物の位置
        //mecanum2/odom1：サポートロボットの位置姿勢（座標変換のため）
        // QoS 設定: 
        //RMW_QOS_POLICY_RELIABILITY_BEST_EFFORT
        //RMW_QOS_POLICY_RELIABILITY_RELIABLE
        rclcpp::QoS qos_profile(10); // キューサイズ10
        qos_profile.reliability(RMW_QOS_POLICY_RELIABILITY_RELIABLE);

        base_pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>("/base_pose",qos_profile,std::bind(&PickServer::odomObjectCallback,this,std::placeholders::_1));
        // odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>("/mecanum2/odom1",qos_profile,std::bind(&PickServer::odomCallback,this,std::placeholders::_1));
        box_corner_sub_ = this->create_subscription<bebop_msgs::msg::BoxCorner>("/box_corners_3d_world",qos_profile,std::bind(&PickServer::conerCallback,this,std::placeholders::_1));
        // aruco_sub_ = this->create_subscription<ros2_aruco_interfaces::msg::ArucoMarkers>("/aruco_markers",qos_profile,std::bind(&PickServer::arucoCallback,this,std::placeholders::_1));
        // alvar_sub_ = this->create_subscription<ar_track_alvar_msgs::msg::AlvarMarkers>("/ar_pose_marker",qos_profile,std::bind(&PickServer::alvarCallback,this,std::placeholders::_1));

        // amir_odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>("/odom",qos_profile,std::bind(&PickServer::amirOdomCallback,this,std::placeholders::_1));
        amir_pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>("/current_pose",qos_profile,std::bind(&PickServer::amirPoseCallback,this,std::placeholders::_1));
        mecanum_pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>("mecanum2/current_pose",qos_profile,std::bind(&PickServer::mecanumPoseCallback,this,std::placeholders::_1));
        // sub_object_pose_ = this->create_subscription<behavior_tree_msgs::msg::ObjectArray>("/camera/object_position",qos_profile,std::bind(&PickServer::amirCameraCallback,this,std::placeholders::_1));

        // アクションサーバーの起動ログを出力
        RCLCPP_INFO(this->get_logger(), "****** Pick action server started ******");
    }

private:
    //コールバック関数の定義
    void odomObjectCallback(const geometry_msgs::msg::PoseStamped::SharedPtr basePoseMsg){
        basePose = *basePoseMsg;

        // // 初期位置と角度設定
        double init_x = 1.5;
        double init_y = 1.0;
        double init_z = 0.0;
        double init_angle_z = -90.0; // 初期オフセットの角度 (度)←角度変えると暴走する可能性あるから、/amir/destinationを確認してから実験すること！！！

        // // 固定座標変換実験用
        // double init_x = 0.90;
        // double init_y = -0.30;
        // double init_z = 0.0;
        // double init_angle_z = 120.0; // 初期オフセットの角度 (度)←角度変えると暴走する可能性あるから、/amir/destinationを確認してから実験すること！！！

        Eigen::Vector3d base_position(basePose.pose.position.x,basePose.pose.position.y,basePose.pose.position.z);

        //サポートロボットが初期位置から移動した位置
        //プライマリロボットから見たサポートロボットの位置が90度ずれているので以下の計算（初期位置を変える場合はここも変更）
        //プライマリロボット座標系の＋ｘはサポートロボット座標系の＋ｙ
        //プライマリロボット座標系の＋ｙはサポートロボット座標系のーｘ

        double x = init_x + (-mecanum_pose.pose.position.y) - amir_pose.pose.position.x;
        double y = init_y - mecanum_pose.pose.position.x - (-amir_pose.pose.position.y);
        double z = init_z;

        tf2::Quaternion quat_tf;
        double roll{}, pitch{}, yaw{};
        geometry_msgs::msg::Quaternion quat_msg = mecanum_pose.pose.orientation;
        tf2::fromMsg(quat_msg, quat_tf);
        tf2::Matrix3x3 m(quat_tf);
        m.getRPY(roll, pitch, yaw);

        tf2::Quaternion quat_tf_amir;
        double roll_amir{}, pitch_amir{}, yaw_amir{};
        geometry_msgs::msg::Quaternion quat_msg_amir = amir_pose.pose.orientation;
        tf2::fromMsg(quat_msg_amir, quat_tf_amir);
        tf2::Matrix3x3 m_amir(quat_tf_amir);
        m_amir.getRPY(roll_amir, pitch_amir, yaw_amir);

        double ori_z = std::fmod(DegToRad(init_angle_z) + -(yaw) + (-yaw_amir), 2 * M_PI);
        //固定座標変換行列を導出（prim：プライマリーロボット,sprt：サポートロボット）
        const Eigen::Translation3d trans(x,y,z);
        const Eigen::AngleAxisd rot(ori_z,Eigen::Vector3d::UnitZ());
        const Eigen::Affine3d affine = trans * rot;

        transformed_position = affine * base_position; //位置
        transformed_attitude = affine * object_attitude; //姿勢
        double object_yaw_angle = calculateYawAngle(transformed_attitude);
        double object_yaw_angle_deg = RadToDeg(object_yaw_angle);

        // std::cout << "x:" << x_amir_to_meca << std::endl;
        // std::cout << "y;" << y_amir_to_meca << std::endl;
        // std::cout << "メカナム視点Z：" << basePose.pose.position.z << std::endl;
        // std::cout << "ヨー角：" << yaw_amir << std::endl;
        // std::cout << "座標変換後：" << transformed_position << std::endl;


        //// マニピュレータの移動先///////////////////////////////////////////
        destination_position.header.stamp = rclcpp::Clock().now();
        destination_position.pose.position.x = transformed_position.x() - (distance_object * sin(object_yaw_angle));
        destination_position.pose.position.y = transformed_position.y() - (distance_object * cos(object_yaw_angle));
        destination_position.pose.position.z = 0.0;

        destination_pub_->publish(destination_position);
        //////////////////////////////////////////////

        // std::cout << "/pose確認！！！！！ : " << amir_pose.pose.pose.position.x << std::endl;
        // std::cout << "移動先X : " << destination_position.pose.position.x << std::endl;
        // std::cout << "移動先Y : " << destination_position.pose.position.y << std::endl;
    }

    // void arucoCallback(const ros2_aruco_interfaces::msg::ArucoMarkers::SharedPtr arucoMsg){
    //     aruco_posi = *arucoMsg;

    //     Eigen::Matrix4d transformation_matrix;
    //     transformation_matrix.setIdentity();

    //     //AMIRベースから見たカメラの位置
    //     transformation_matrix(0,3) = 0.185;
    //     transformation_matrix(1,3) = 0.0;
    //     transformation_matrix(2,3) = 0.318;

    //     Eigen::Matrix3d rotation_matrix_x;
    //     double angle_x = -M_PI / 2;
    //     rotation_matrix_x = Eigen::AngleAxisd(angle_x, Eigen::Vector3d::UnitX());

    //     Eigen::Matrix3d rotation_matrix_y;
    //     double angle_y = M_PI / 2;
    //     rotation_matrix_y = Eigen::AngleAxisd(angle_y, Eigen::Vector3d::UnitY());

    //     Eigen::Matrix3d combined_rotation_matrix = rotation_matrix_x * rotation_matrix_y;

    //     transformation_matrix.block<3,3>(0,0) = combined_rotation_matrix;

    //     if (!aruco_posi.poses.empty()) {
    //         for (size_t i = 0; i < aruco_posi.poses.size(); i++) {
    //             //positionの座標変換（カメラto）
    //             Eigen::Vector3d position_camera(aruco_posi.poses[i].position.x,
    //                                             aruco_posi.poses[i].position.y,
    //                                             aruco_posi.poses[i].position.z);
                
    //             Eigen::Vector4d position_homogeneous(position_camera.x(),position_camera.y(),position_camera.z(),1.0);
    //             Eigen::Vector4d position_base_homogeneous = transformation_matrix * position_homogeneous;
    //             Eigen::Vector3d amir_bese_obj_vector(position_base_homogeneous.x() / position_base_homogeneous.w(),
    //                                                  position_base_homogeneous.y() / position_base_homogeneous.w(),
    //                                                  position_base_homogeneous.z() / position_base_homogeneous.w());

    //             amir_position_aruco.pose.position.x = aruco_world_posi_x - amir_bese_obj_vector.x();
    //             amir_position_aruco.pose.position.y = aruco_world_posi_y - amir_bese_obj_vector.y();
    //             amir_position_aruco.pose.position.z = amir_bese_obj_vector.z(); //使わない

    //             // orientation（クォータニオン）から pitch を抽出する
    //             geometry_msgs::msg::Quaternion q = aruco_posi.poses[i].orientation;
    //             tf2::Quaternion tf_q;
    //             tf2::fromMsg(q, tf_q);
    //             tf2::Matrix3x3(tf_q).getRPY(aruco_roll, aruco_pitch, aruco_yaw);
    //             amir_attitude = RadToDeg(aruco_pitch);

    //             // std::cout << "AMIRの自己位置 " << i + 1 << " の ARマーカー: "
    //             //   << "x: " << amir_position_aruco.pose.position.x << ", "
    //             //   << "y: " << amir_position_aruco.pose.position.y << ", "
    //             // //   << "z: " << amir_position_aruco.pose.position.z << ", "
    //             //   << "THETA: " << amir_attitude <<std::endl;
    //         }
    //     } else {
    //         std::cout << "ArucoMakerが見つかりません" << std::endl;
    //     }

    // }

    // void alvarCallback(const ar_track_alvar_msgs::msg::AlvarMarkers::SharedPtr alvarMsg){
    //     alvar_markers_posi = *alvarMsg;

    //     Eigen::Matrix4d transformation_matrix;
    //     transformation_matrix.setIdentity();

    //     //メカナムベースから見たカメラの位置
    //     double mecanum_to_camera_x = 0.185;
    //     double mecanum_to_camera_y = 0.020; //RGBカメラの位置
    //     double mecanum_to_camera_z = 0.410;

    //     if (!alvar_markers_posi.markers.empty()) {
    //         for (size_t i = 0; i < alvar_markers_posi.markers.size(); i++) {
                
    //             alvar_id = alvar_markers_posi.markers[i].id;

    //             //alvarはカメラ座標系がメカナムベース座標系と一致しているので、並行移動のみでオフセット
    //             amir_position_alvar.pose.position.x = alvar_markers_posi.markers[i].pose.pose.position.x + mecanum_to_camera_x;
    //             amir_position_alvar.pose.position.y = alvar_markers_posi.markers[i].pose.pose.position.y + mecanum_to_camera_y;
    //             amir_position_alvar.pose.position.z = alvar_markers_posi.markers[i].pose.pose.position.z + mecanum_to_camera_z; //使わない

    //             // orientation（クォータニオン）から pitch を抽出する
    //             geometry_msgs::msg::Quaternion q = alvar_markers_posi.markers[i].pose.pose.orientation;
    //             tf2::Quaternion tf_q;
    //             tf2::fromMsg(q, tf_q);
    //             tf2::Matrix3x3(tf_q).getRPY(aruco_roll, aruco_pitch, aruco_yaw);

    //             if(alvar_id == 1){
    //                 aruco_yaw_offset =  M_PI/2 - aruco_yaw - M_PI/2 ;
    //             }
    //             else if(alvar_id == 2){
    //                 aruco_yaw_offset =  M_PI/2 - aruco_yaw ; //arマーカーと正対する向きが180度(amirの向き)
    //             }
    //             else if(alvar_id == 3){
    //                 aruco_yaw_offset =  M_PI/2 - aruco_yaw + M_PI/2 ;
    //             }

    //             amir_attitude = RadToDeg(aruco_yaw_offset);

    //             // std::cout << "メカナムから見た " << i + 1 << " の ARマーカーの位置: "
    //             //   << "x: " << amir_position_alvar.pose.position.x << ", "
    //             //   << "y: " << amir_position_alvar.pose.position.y << ", "
    //             //   << "z: " << amir_position_alvar.pose.position.z << ", "
    //             //   << "THETA: " << amir_attitude <<std::endl;
    //         }
    //     } else {
    //         std::cout << "ArucoMakerが見つかりません" << std::endl;
    //     }

    // }

    // void amirCameraCallback(const behavior_tree_msgs::msg::ObjectArray::SharedPtr objMsg){
    //     amir_camera_object = *objMsg;

    //     Eigen::Matrix4d transformation_matrix;
    //     transformation_matrix.setIdentity();

    //     transformation_matrix(0,3) = 0.185;
    //     transformation_matrix(1,3) = -0.030;
    //     transformation_matrix(2,3) = 0.318 - 0.03;

    //     Eigen::Matrix3d rotation_matrix_x;
    //     double angle_x = -M_PI / 2;
    //     rotation_matrix_x = Eigen::AngleAxisd(angle_x, Eigen::Vector3d::UnitX());

    //     Eigen::Matrix3d rotation_matrix_y;
    //     double angle_y = M_PI / 2;
    //     rotation_matrix_y = Eigen::AngleAxisd(angle_y, Eigen::Vector3d::UnitY());

    //     Eigen::Matrix3d combined_rotation_matrix = rotation_matrix_x * rotation_matrix_y;

    //     transformation_matrix.block<3,3>(0,0) = combined_rotation_matrix;

    //     //カメラ座標系からAMIRベース座標系に変換(オフセットの数字はAMIRとカメラの位置関係)
    //    if (!amir_camera_object.objects.empty()) {
    //         for (size_t i = 0; i < amir_camera_object.objects.size(); i++) {

    //             Eigen::Vector3d position_camera(amir_camera_object.objects[i].from_camera.position.x,
    //                                             amir_camera_object.objects[i].from_camera.position.y,
    //                                             amir_camera_object.objects[i].from_camera.position.z);
                
    //             Eigen::Vector4d position_homogeneous(position_camera.x(),position_camera.y(),position_camera.z(),1.0);
    //             Eigen::Vector4d position_base_homogeneous = transformation_matrix * position_homogeneous;
    //             Eigen::Vector3d amir_bese_obj_vector(position_base_homogeneous.x() / position_base_homogeneous.w(),
    //                                                  position_base_homogeneous.y() / position_base_homogeneous.w(),
    //                                                  position_base_homogeneous.z() / position_base_homogeneous.w());

    //             amir_bese_object.pose.position.x = amir_bese_obj_vector.x();
    //             amir_bese_object.pose.position.y = amir_bese_obj_vector.y();
    //             amir_bese_object.pose.position.z = amir_bese_obj_vector.z();

    //             std::cout << "オブジェクト " << i + 1 << " の位置 (AMIR): "
    //               << "x: " << amir_bese_object.pose.position.x << ", "
    //               << "y: " << amir_bese_object.pose.position.y << ", "
    //               << "z: " << amir_bese_object.pose.position.z << std::endl;
    //         }
    //     } else {
    //         std::cout << "オブジェクトが見つかりません" << std::endl;
    //     }


    // }

    // void odomCallback(const nav_msgs::msg::Odometry::SharedPtr odomMsg){
    //     odom = *odomMsg;
    // }

    // void amirOdomCallback(const nav_msgs::msg::Odometry::SharedPtr amirOdomMsg){
    //     amir_odom = *amirOdomMsg;
    // }

    void amirPoseCallback(const geometry_msgs::msg::PoseStamped::SharedPtr amirPoseMsg){
        amir_pose = *amirPoseMsg;
    }
    
    void mecanumPoseCallback(const geometry_msgs::msg::PoseStamped::SharedPtr mecanumPoseMsg){
        mecanum_pose = *mecanumPoseMsg;
    }

    void conerCallback(const bebop_msgs::msg::BoxCorner::SharedPtr box_corners_3d_world_msg){
        corner = *box_corners_3d_world_msg;
        //対象物の姿勢ベクトルを求める
        if(corner.corner_num == 9){
            object_attitude = Eigen::Vector3d(
                static_cast<double>(corner.posi.position.x),
                static_cast<double>(corner.posi.position.y),
                static_cast<double>(corner.posi.position.z)
            );
            // std::cout << "コーナー" << corner.posi.position.x << std::endl;
        }
    }
    
    double DegToRad(double deg){
        return M_PI/180.0*deg;
    }

    double RadToDeg(double rad){
        return rad * (180.0/M_PI);
    }  

    double calculateYawAngle(const Eigen::Vector3d &vector){
        return atan2(vector.y(),vector.x());
    }

    // void place(const std::shared_ptr<rclcpp_action::ServerGoalHandle<PickAction>> goal_handle)
    // {
    //     RCLCPP_INFO(this->get_logger(), "Executing Place action");

    //     auto goal = goal_handle->get_goal();
    //     auto result = std::make_shared<PickAction::Result>();

    //     // Placeアクションのゴールを作成
    //     PlaceAction::Goal place_goal;

    //     //place位置
    //     float place_position_x,place_position_y,place_position_z;

    //     place_position_x = -0.50;
    //     place_position_y = -0.40;
    //     place_position_z = 0.40;
        
    //     place_goal.x = place_position_x;
    //     place_goal.y = place_position_y;
    //     place_goal.z = place_position_z;

    //     // MoveArmアクションサーバーが利用可能かどうかを確認
    //     if (!place_client_->wait_for_action_server(std::chrono::seconds(5)))
    //     {
    //         RCLCPP_ERROR(this->get_logger(), "Place action server not available");
    //         // result->success = false;
    //         // result->error_message = "MoveArm action server not available";
    //         // goal_handle->abort(result);
    //         return;
    //     }

    //     auto send_goal_result = rclcpp_action::Client<PlaceAction>::SendGoalOptions();

    //     RCLCPP_ERROR(this->get_logger(), "Place action server");

    //     // MoveArm アクションサーバーで処理を実行．ゴールを非同期で送信．サーバーがゴール処理を完了すると、クライアントの result_callback が呼び出される
    //     place_client_->async_send_goal(place_goal, send_goal_result);
    // }

    //アクションサーバー関連
    rclcpp_action::Server<PickAction>::SharedPtr action_server_;
    rclcpp_action::Client<MoveArmAction>::SharedPtr move_arm_client_;
    rclcpp_action::Client<GraspAction>::SharedPtr grasp_client_;
    rclcpp_action::Client<PlaceAction>::SharedPtr place_client_;

    rclcpp_action::GoalResponse handle_goal(
        const rclcpp_action::GoalUUID &uuid,
        std::shared_ptr<const PickAction::Goal> goal)
    {
        RCLCPP_INFO(this->get_logger(), "Received pick goal: x=%f, y=%f, z=%f", goal->x, goal->y, goal->z);
        (void)uuid;
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }

    rclcpp_action::CancelResponse handle_cancel(
        const std::shared_ptr<rclcpp_action::ServerGoalHandle<PickAction>> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Cancel request received");
        (void)goal_handle;
        return rclcpp_action::CancelResponse::ACCEPT;
    }

    void handle_accepted(
        const std::shared_ptr<rclcpp_action::ServerGoalHandle<PickAction>> goal_handle)
    {
        std::thread([this, goal_handle]() {
            this->execute(goal_handle);
        }).detach();
    }

    void grasp(const std::shared_ptr<rclcpp_action::ServerGoalHandle<PickAction>> goal_handle)
    {
        auto goal = goal_handle->get_goal();
        auto result = std::make_shared<PickAction::Result>();
        
        GraspAction::Goal grasp_goal;
        grasp_goal.id = "pick";

        // Graspアクションサーバーが利用可能かどうかを確認
        if (!grasp_client_->wait_for_action_server(std::chrono::seconds(5)))
        {
            RCLCPP_ERROR(this->get_logger(), "Grasp action server not available");
            // result->success = false;
            // result->error_message = "MoveArm action server not available";
            goal_handle->abort(result);
            return;
        }

        auto send_goal_result = rclcpp_action::Client<GraspAction>::SendGoalOptions();

        send_goal_result.result_callback = [this, goal_handle, result](const rclcpp_action::ClientGoalHandle<GraspAction>::WrappedResult &grasp_result){
            // MoveArm サーバーからの結果を取得
            if (grasp_result.code == rclcpp_action::ResultCode::SUCCEEDED)
            {
                // success フィールドを確認
                // graspが成功したら、持ち上げる
                if (grasp_result.result->success)
                {
                    // RCLCPP_INFO(this->get_logger(), "MoveArm succeeded: %s", move_arm_result->error_string.c_str());
                    // MoveArmアクションのゴールを作成
                    MoveArmAction::Goal move_arm_goal;

                    //持ち上げるときの目標位置設定
                    float lift_obj_opsition_x,lift_obj_opsition_y,lift_obj_opsition_z;

                    lift_obj_opsition_x = 0.30;
                    lift_obj_opsition_y = 0.0;
                    lift_obj_opsition_z = 0.60;

                    move_arm_goal.x = lift_obj_opsition_x;
                    move_arm_goal.y = lift_obj_opsition_y;
                    move_arm_goal.z = lift_obj_opsition_z;

                    // MoveArmアクションサーバーが利用可能かどうかを確認
                    if (!move_arm_client_->wait_for_action_server(std::chrono::seconds(5)))
                    {
                        RCLCPP_ERROR(this->get_logger(), "MoveArm action server not available");
                        // result->success = false;
                        // result->error_message = "MoveArm action server not available";
                        // goal_handle->abort(result);
                        return;
                    }

                    auto send_goal_result = rclcpp_action::Client<MoveArmAction>::SendGoalOptions();

                    // 結果コールバックを設定
                    send_goal_result.result_callback = [this, goal_handle, result](const rclcpp_action::ClientGoalHandle<MoveArmAction>::WrappedResult &move_arm_result){
                        // MoveArm サーバーからの結果を取得
                        if (move_arm_result.code == rclcpp_action::ResultCode::SUCCEEDED)
                        {
                            // success フィールドを確認
                            if (move_arm_result.result->success)
                            {
                                // RCLCPP_INFO(this->get_logger(), "MoveArm succeeded: %s", move_arm_result->error_string.c_str());
                                auto result = std::make_shared<PickAction::Result>();
                                RCLCPP_INFO(this->get_logger(), "Pick Successed");
                                result->error_string = "success"; // 成功メッセージを設定
                                goal_handle->succeed(result); // ゴール成功を通知

                                //Placeを起動
                                // place(goal_handle);
                            }
                            else
                            {
                                // RCLCPP_ERROR(this->get_logger(), "MoveArm failed: %s", move_arm_result->error_string.c_str());
                            }
                        }
                    };

                    // MoveArm アクションサーバーで処理を実行．ゴールを非同期で送信．サーバーがゴール処理を完了すると、クライアントの result_callback が呼び出される
                    move_arm_client_->async_send_goal(move_arm_goal, send_goal_result);

                }
                else
                {
                    // RCLCPP_ERROR(this->get_logger(), "MoveArm failed: %s", move_arm_result->error_string.c_str());
                    RCLCPP_ERROR(this->get_logger(), "Grasp action did not succeed");
                    goal_handle->abort(result); // アクションを失敗として終了
                }
            }
            else
            {
                RCLCPP_ERROR(this->get_logger(), "Grasp action did not succeed");
                goal_handle->abort(result); // アクションを失敗として終了
            }
        };

        // Grasp アクションサーバーで処理を実行．ゴールを非同期で送信．サーバーがゴール処理を完了すると、クライアントの result_callback が呼び出される
        grasp_client_->async_send_goal(grasp_goal, send_goal_result);

        
    }


    void execute(const std::shared_ptr<rclcpp_action::ServerGoalHandle<PickAction>> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Executing pick_using_d_optimality action");
        auto result = std::make_shared<PickAction::Result>();

        // MoveArmアクションのゴールを作成
        auto goal = goal_handle->get_goal();
        behavior_tree_msgs::action::Pick_Goal updated_goal = *goal;
        MoveArmAction::Goal move_arm_goal;

        //goal_handle->get_goal()は読み取り専用とか言われるので、別で保存して回避する
        // updated_goal.x = transformed_position.x() - 0.1;
        // updated_goal.y = transformed_position.y();
        // updated_goal.z = transformed_position.z();

        // if(transformed_position.x() > 0 && transformed_position.y() > 0){ // x,y > 0 の区域では何故か奥を取るのでオフセット。他の区間も作るべき
        //     transformed_position.x() = transformed_position.x() - 0.05;
        //     transformed_position.y() = transformed_position.y() - 0.05;
        // }

        double center_x ;
        double center_y ;

        center_x = transformed_position.x();
        center_y = transformed_position.y();

        // if(alvar_id == 1){ //右のARマーカー
        //     center_x = transformed_position.x() + amir_to_marker_x_1;
        //     center_y = transformed_position.y() + amir_to_marker_y_1;
        // }
        // else if(alvar_id == 2){ //正面のARマーカー
        //     center_x = transformed_position.x() + amir_to_marker_x_2;
        //     center_y = transformed_position.y() + amir_to_marker_y_2;
        // }
        // else if(alvar_id == 3){ //左のARマーカー
        //     center_x = transformed_position.x() + amir_to_marker_x_3;
        //     center_y = transformed_position.y() + amir_to_marker_y_3;
        // }

        double adjustment_theta;
        double adjustment_distance = 0.0;

        //オブジェクトの中心ではアームが干渉するので、ズラして目標位置を設定
        if(center_y > 0){
            adjustment_theta = std::atan2(center_y, center_x) - 0.10472; //-6度余分に回転させる
        }
        else if(center_y < 0){
            adjustment_theta = std::atan2(center_y, center_x) + 0.10472; //6度余分に回転させる
        }
        // else if(center_y > 0 && alvar_id != 2){
        //     adjustment_theta = std::atan2(center_y, center_x) + 0.0523599;
        //     adjustment_distance = 0.12; //オブジェクトの中心からズラす距離
        // }
        // else if(center_y < 0 && alvar_id != 2){
        //     adjustment_theta = std::atan2(center_y, center_x) - 0.0523599;
        //     adjustment_distance = 0.12; //オブジェクトの中心からズラす距離
        // }

        double adjustment_r = std::sqrt(center_x*center_x + center_y*center_y);

        move_arm_goal.x = (adjustment_r - adjustment_distance)*std::cos(adjustment_theta);
        move_arm_goal.y = (adjustment_r - adjustment_distance)*std::sin(adjustment_theta);
        move_arm_goal.z = transformed_position.z() ;

        //AMIRの情報を活用ver
        // move_arm_goal.x = amir_bese_object.pose.position.x;
        // move_arm_goal.y = amir_bese_object.pose.position.y;
        // move_arm_goal.z = amir_bese_object.pose.position.z;

        RCLCPP_INFO(this->get_logger(), "確認x:%f", move_arm_goal.x);
        RCLCPP_INFO(this->get_logger(), "確認y:%f", move_arm_goal.y);
        RCLCPP_INFO(this->get_logger(), "確認z:%f", move_arm_goal.z);


        // MoveArmアクションサーバーが利用可能かどうかを確認
        if (!move_arm_client_->wait_for_action_server(std::chrono::seconds(5)))
        {
            RCLCPP_ERROR(this->get_logger(), "MoveArm action server not available");
            // result->success = false;
            // result->error_message = "MoveArm action server not available";
            // goal_handle->abort(result);
            return;
        }

        auto send_goal_result = rclcpp_action::Client<MoveArmAction>::SendGoalOptions();

        // 結果コールバックを設定
        send_goal_result.result_callback = [this, goal_handle, result](const rclcpp_action::ClientGoalHandle<MoveArmAction>::WrappedResult &move_arm_result){
            // MoveArm サーバーからの結果を取得
            if (move_arm_result.code == rclcpp_action::ResultCode::SUCCEEDED)
            {
                // success フィールドを確認
                if (move_arm_result.result->success)
                {
                    // RCLCPP_INFO(this->get_logger(), "MoveArm succeeded: %s", move_arm_result->error_string.c_str());
                    // グラスプ処理を実行
                    // grasp(goal_handle);
                    if (move_arm_result.result->success) {
                        grasp(goal_handle);
                    }
                    else {
                        RCLCPP_ERROR(this->get_logger(), "MoveArm failed: %s", move_arm_result.result->error_string.c_str());
                        goal_handle->abort(result); // アクションを失敗として終了
                    }                  
                }
                else
                {
                    // RCLCPP_ERROR(this->get_logger(), "MoveArm failed: %s", move_arm_result->error_string.c_str());
                    RCLCPP_ERROR(this->get_logger(), "MoveArm did not succeed");
                    goal_handle->abort(result); // アクションを失敗として終了
                }
            }
        };

        // MoveArm アクションサーバーで処理を実行．ゴールを非同期で送信．サーバーがゴール処理を完了すると、クライアントの result_callback が呼び出される
        move_arm_client_->async_send_goal(move_arm_goal, send_goal_result);

        std::promise<void> promise;
        std::future<void> future = promise.get_future();
        future.wait(); // 非同期処理の完了を待つ
    }


};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PickServer>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
