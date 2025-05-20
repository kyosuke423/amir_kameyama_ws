// Copyright 2021 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <geometry_msgs/msg/transform_stamped.hpp>

#include <rclcpp/rclcpp.hpp>
#include "rclcpp/logger.hpp"
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/transform_broadcaster.h>
#include <tf2_ros/static_transform_broadcaster.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.h>
#include <nav_msgs/msg/odometry.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <tf2_ros/buffer.h>
#include<tf2_eigen/tf2_eigen.h>

#include <memory>
#include <string>

using std::placeholders::_1;

class FramePublisher : public rclcpp::Node
{ 
public:
  FramePublisher()
  : Node("odom_tf2_frame_publisher")
  {
    auto qos = rclcpp::QoS(rclcpp::KeepLast(100));
    // auto qos = rclcpp::SensorDataQoS();
    // Declare and acquire `turtlename` parameter
    // this->declare_parameter<std::string>("turtlename", "turtle");
    // this->get_parameter("turtlename", turtlename_);
    // tf_static_publisher_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);
    // Initialize the transform broadcaster
    tf_broadcaster_ =
      std::make_unique<tf2_ros::TransformBroadcaster>(*this);

    // Subscribe to a turtle{1}{2}/pose topic and call handle_turtle_pose
    // callback function on each message
    // std::ostringstream stream;
    // stream << "/" << turtlename_.c_str() << "/pose";
    // std::string topic_name = stream.str();
    std::string topic_name = "/odom";

    subscription_ = this->create_subscription<nav_msgs::msg::Odometry>(
      topic_name, rclcpp::SensorDataQoS(),
      std::bind(&FramePublisher::handle_odom, this, _1));
    

    
    ////2022.10.18(drone map add)////
    // std::string topic_name_1 = "/bebop/slam_to_marker";
    
    // slam_subscription_ = this->create_subscription<geometry_msgs::msg::TransformStamped>(
    //   topic_name_1, rclcpp::SensorDataQoS(),
    //   std::bind(&FramePublisher::slam_to_marker, this, _1));
      
    /////////////

    //scan_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
    //  "/mecanum2/scan", rclcpp::SensorDataQoS(),
    //  std::bind(&FramePublisher::handle_scan, this, _1));

    odom_pub_ = this->create_publisher<nav_msgs::msg::Odometry>("/odom", qos);
 

    //scan_pub_ = this->create_publisher<sensor_msgs::msg::LaserScan>("/mecanum2/scan2", rclcpp::SensorDataQoS());
  }

private:

  void handle_scan(const std::shared_ptr<sensor_msgs::msg::LaserScan> msg)
  {
    sensor_msgs::msg::LaserScan pub_msg;
    pub_msg = *msg;
    pub_msg.header.stamp = this->get_clock()->now();
    //scan_pub_->publish(pub_msg);
  }

  void handle_odom(const std::shared_ptr<nav_msgs::msg::Odometry> msg)
  {
 
    rclcpp::Time now = this->get_clock()->now();
    geometry_msgs::msg::TransformStamped t;
    geometry_msgs::msg::TransformStamped t_static;
    geometry_msgs::msg::TransformStamped tf_map_odom;
    nav_msgs::msg::Odometry odom;

    odom = *msg;
    odom.header.stamp = now;


    tf_map_odom.header.stamp = msg->header.stamp;
    t_static.header.stamp = msg->header.stamp;
    tf_map_odom.header.frame_id = "map";
    tf_map_odom.child_frame_id = "odom";
    tf_map_odom.transform.rotation.w = 1;

    // t_static.header.stamp = now;
    
    // t_static.header.frame_id = "base_link";
    // t_static.child_frame_id = "laser_frame";
    // t_static.transform.translation.x = -0.2;
    // t_static.transform.translation.y = 0;
    // t_static.transform.translation.z = -0.02;

    t_static.header.frame_id = "base_link";
    t_static.child_frame_id = "laser_frame";
    t_static.transform.translation.x = 0.2;
    t_static.transform.translation.y = 0.0;
    t_static.transform.translation.z = 0.08;

    tf2::Quaternion tf2_quat, tf2_quat_from_msg;
    tf2_quat.setRPY(0, 3.14159, 3.14159);
    // Convert tf2::Quaternion to geometry_msgs::msg::Quaternion
    geometry_msgs::msg::Quaternion msg_quat = tf2::toMsg(tf2_quat);
    t_static.transform.rotation = msg_quat;
    


    // Read message content and assign it to
    // corresponding tf variables
    t.header.stamp = now;
    // t.header.stamp = msg->header.stamp;
    t.header.frame_id = msg->header.frame_id;
    t.child_frame_id = msg->child_frame_id;

    // Turtle only exists in 2D, thus we get x and y translation
    // coordinates from the message and set the z coordinate to 0
    
    t.transform.translation.x = msg->pose.pose.position.x;
    t.transform.translation.y = msg->pose.pose.position.y;
    t.transform.translation.z = msg->pose.pose.position.z;

    // For the same reason, turtle can only rotate around one axis
    // and this why we set rotation in x and y to 0 and obtain
    // rotation in z axis from the message
    t.transform.rotation = msg->pose.pose.orientation;

    // Send the transformation
    // tf_static_publisher_->sendTransform(t_static);
    // tf_static_publisher_->sendTransform(tf_map_odom);
    tf_broadcaster_->sendTransform(t);
    odom_pub_->publish(odom);
  }
  
  //2022.10.18//
  void slam_to_marker(const std::shared_ptr<geometry_msgs::msg::TransformStamped> msg)
  {
    //std::cout << "slam_to_marker" << std::endl;
    RCLCPP_INFO(this->get_logger(),"slam_to_marker_2");
    rclcpp::Time now = this->get_clock()->now();
    
    geometry_msgs::msg::TransformStamped trans;
    
    trans = *msg;
    trans.header.frame_id = "ar_marker_0";
    trans.child_frame_id = "body";
    trans.header.stamp = now;
    // trans.header.stamp = msg->header.stamp;
    
    //RCLCPP_INFO(this->get_logger(),"t[ p: ('%lf', '%lf', '%lf') ", trans.transform.translation.x, trans.transform.translation.y, trans.transform.translation.z);
    //RCLCPP_INFO(this->get_logger(),"q: ('%lf', '%lf', '%lf', '%lf')]", trans.transform.rotation.x, trans.transform.rotation.y, trans.transform.rotation.z, trans.transform.rotation.w);
    
    tf_broadcaster_->sendTransform(trans);
    
    
    //inverse//
    //geometry_msgs::msg::TransformStamped inverse_trans;
    //Eigen::Isometry3d trans;
    //trans = tf2::transformToEigen(*msg);
    //inverse_trans = tf2::eigenToTransform(trans.inverse());
    //inverse_trans.header.frame_id = "ar_marker_0";
    //inverse_trans.child_frame_id = "body";
    //inverse_trans.header.stamp = now;
    
    //tf_broadcaster_->sendTransform(inverse_trans);
    
    //RCLCPP_INFO(this->get_logger(),"t[ p: ('%lf', '%lf', '%lf') ", inverse_trans.transform.translation.x, inverse_trans.transform.translation.y, inverse_trans.transform.translation.z);
    //RCLCPP_INFO(this->get_logger(),"q: ('%lf', '%lf', '%lf', '%lf')]", inverse_trans.transform.rotation.x, inverse_trans.transform.rotation.y, inverse_trans.transform.rotation.z, inverse_trans.transform.rotation.w);
    ////
  
    
    
    
    
  }
  ////
  
  rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr subscription_;
  // rclcpp::Subscription<geometry_msgs::msg::TransformStamped>::SharedPtr slam_subscription_;
  
  //rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_sub_;
  //rclcpp::Publisher<sensor_msgs::msg::LaserScan>::SharedPtr scan_pub_;
  rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub_;
  std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
  

  // std::shared_ptr<tf2_ros::StaticTransformBroadcaster> tf_static_publisher_;
  std::string turtlename_;
};
  

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<FramePublisher>());
  rclcpp::shutdown();
  return 0;
}

// #include <geometry_msgs/msg/transform_stamped.hpp>
// #include <rclcpp/rclcpp.hpp>
// #include <tf2/LinearMath/Quaternion.h>
// #include <tf2_ros/transform_broadcaster.h>
// #include <tf2_ros/static_transform_broadcaster.h>
// #include <tf2_geometry_msgs/tf2_geometry_msgs.h>
// #include <nav_msgs/msg/odometry.hpp>

// #include <memory>
// #include <string>

// using std::placeholders::_1;

// class FramePublisher : public rclcpp::Node
// { 
// public:
//   FramePublisher()
//   : Node("odom_tf2_frame_publisher")
//   {
//     // auto qos = rclcpp::QoS(rclcpp::KeepLast(100)).reliable(); 
//     auto qos = rclcpp::QoS(rclcpp::KeepLast(100));

    

//     tf_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*this);
//     tf_static_publisher_ = std::make_shared<tf2_ros::StaticTransformBroadcaster>(this);

//     subscription_ = this->create_subscription<nav_msgs::msg::Odometry>(
//       "/odom", qos,
//       std::bind(&FramePublisher::handle_odom, this, _1));

//     odom_pub_ = this->create_publisher<nav_msgs::msg::Odometry>("/odom", qos);

//     // `tf_static` の発行（1回だけ）
//     publish_static_tf();

//     // **10Hzで `tf` を発行するタイマーをセット**
//     tf_timer_ = this->create_wall_timer(
//       std::chrono::milliseconds(500),  // 100ms = 10Hz
//       std::bind(&FramePublisher::publish_tf, this));
//   }

// private:
//   void handle_odom(const std::shared_ptr<nav_msgs::msg::Odometry> msg)
//   {
//     // **最新のオドメトリ情報を保存**
//     last_odom_ = *msg;

//     // `odom` メッセージはそのままパブリッシュ
//     odom_pub_->publish(*msg);
//   }

//   void publish_dynamic_tf()
//   {
//       geometry_msgs::msg::TransformStamped transformStamped;
//       transformStamped.header.stamp = this->get_clock()->now();
//       transformStamped.header.frame_id = "base_link";
//       transformStamped.child_frame_id = "laser_frame";

//       transformStamped.transform.translation.x = 0.2;
//       transformStamped.transform.translation.y = 0.0;
//       transformStamped.transform.translation.z = 0.08;

//       tf2::Quaternion q;
//       q.setRPY(0, 3.14159, 3.14159);
//       transformStamped.transform.rotation = tf2::toMsg(q);

//       tf_broadcaster_->sendTransform(transformStamped);
//   }

//   // `publish_tf()` の中で `base_link → laser_frame` のTFを送信
//   void publish_tf()
//   {
//     if (last_odom_.header.frame_id.empty()) { 
//       return;  // 最初のオドメトリデータが入るまで発行しない
//     }

//     rclcpp::Time now = this->get_clock()->now();
//     geometry_msgs::msg::TransformStamped t;
//     t.header.stamp = now;
//     t.header.frame_id = last_odom_.header.frame_id;
//     t.child_frame_id = last_odom_.child_frame_id;
//     t.transform.translation.x = last_odom_.pose.pose.position.x;
//     t.transform.translation.y = last_odom_.pose.pose.position.y;
//     t.transform.translation.z = last_odom_.pose.pose.position.z;
//     t.transform.rotation = last_odom_.pose.pose.orientation;

//     tf_broadcaster_->sendTransform(t);

//     // 追加: base_footprint → base_link のTFを送信
//     publishBaseFootprintToBaseLink();

//     // 追加: `base_link → laser_frame` のTFを送信
//     publish_dynamic_tf();
//   }

//   void publish_static_tf()
//   {
//     geometry_msgs::msg::TransformStamped t_static;
//     t_static.header.stamp = this->get_clock()->now();
//     t_static.header.frame_id = "base_link";
//     t_static.child_frame_id = "laser_frame";
//     t_static.transform.translation.x = 0.2;
//     t_static.transform.translation.y = 0.0;
//     t_static.transform.translation.z = 0.08;

//     tf2::Quaternion tf2_quat;
//     tf2_quat.setRPY(0, 3.14159, 3.14159);
//     t_static.transform.rotation = tf2::toMsg(tf2_quat);

//     tf_static_publisher_->sendTransform(t_static);

//     // geometry_msgs::msg::TransformStamped base_footprint_to_base_link;
//     // base_footprint_to_base_link.header.stamp = this->get_clock()->now();
//     // base_footprint_to_base_link.header.frame_id = "base_footprint";
//     // base_footprint_to_base_link.child_frame_id = "base_link";
//     // base_footprint_to_base_link.transform.translation.x = 0.0;
//     // base_footprint_to_base_link.transform.translation.y = 0.0;
//     // base_footprint_to_base_link.transform.translation.z = 0.1;

//     // tf2::Quaternion q;
//     // q.setRPY(0, 0, 0);
//     // base_footprint_to_base_link.transform.rotation = tf2::toMsg(q);

//     // tf_static_publisher_->sendTransform(base_footprint_to_base_link);
//   }

//   void publishBaseFootprintToBaseLink()
//   {
//     if (last_odom_.header.frame_id.empty()) { 
//         return;  // オドメトリが未受信なら送信しない
//     }

//     geometry_msgs::msg::TransformStamped base_footprint_to_base_link;
//     base_footprint_to_base_link.header.stamp = last_odom_.header.stamp; // オドメトリの時間に合わせる
//     base_footprint_to_base_link.header.frame_id = "base_footprint";
//     base_footprint_to_base_link.child_frame_id = "base_link";
    
//     // 必要なら適切なオフセットを設定
//     base_footprint_to_base_link.transform.translation.x = 0.0;
//     base_footprint_to_base_link.transform.translation.y = 0.0;
//     base_footprint_to_base_link.transform.translation.z = 0.1;  // 仮の高さオフセット

//     tf2::Quaternion q;
//     q.setRPY(0, 0, 0);
//     base_footprint_to_base_link.transform.rotation = tf2::toMsg(q);

//     tf_broadcaster_->sendTransform(base_footprint_to_base_link);
//   }

//   rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr subscription_;
//   rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub_;
//   std::unique_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
//   std::shared_ptr<tf2_ros::StaticTransformBroadcaster> tf_static_publisher_;

//   // **追加したメンバ変数**
//   rclcpp::TimerBase::SharedPtr tf_timer_;  // **10Hzの発行タイマー**
//   nav_msgs::msg::Odometry last_odom_;  // **最新のオドメトリ情報**
// };

// int main(int argc, char * argv[])
// {
//   rclcpp::init(argc, argv);
//   rclcpp::spin(std::make_shared<FramePublisher>());
//   rclcpp::shutdown();
//   return 0;
// }
