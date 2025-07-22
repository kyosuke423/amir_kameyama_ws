# 実験概要
実験に必要なパラメータは以下で調整できる。

| パラメータ  | ファイルパス | 変数 |
| --------------------- | ---------- |---------|
| D-optimality閾値 |amir_kameyama_ws / src / bt_generator / bt_xml / navigation.xml | threshold="20000" |

# Mecanum Rover 2.0 の動作手順
上から順に実行していけば、実験が開始する。
## dars-note-002
### メカナムローバーセットアップ
1. ターミナルを5つ用意して、JetsonにSSH接続する（パスワード:dars）
```
ssh agx@192.168.11.6 -X
```  
2. ファンの起動
```
sudo sh -c 'echo 255 > /sys/devices/pwm-fan/target_pwm'
```
3. ターミナル1
```
source /opt/ros/noetic/setup.zsh
source ~/catkin_ws/devel/setup.zsh --extend
sudo chmod 777 /dev/ttyUSB0
roslaunch mecanumrover_samples bringup_kawase.launch
```
4. ターミナル2
```
source /opt/ros/noetic/setup.zsh
source /opt/ros/galactic/setup.zsh
rosparam load ~/ros1_bridge_ws/bridge.yaml
ros2 run ros1_bridge parameter_bridge
```
5. ターミナル3
```
source /opt/ros/galactic/setup.zsh
source ~/galactic_ws/install/setup.zsh --extend
ros2 launch my_utility odom_tf2_broadcaster.launch.py
```
6. ターミナル4
```
source /opt/ros/galactic/setup.zsh
source ~/galactic_ws/install/setup.zsh --extend
sudo chmod 777 /dev/ttyACM0
ros2 launch urg urg_launch.py
```
7. ターミナル5
```
source /opt/ros/galactic/setup.zsh
source ~/galactic_ws/install/setup.zsh --extend
ros2 launch mecanum_navigation2 bringup_launch.py
```
### 画像処理モジュール
ターミナルを６つ用意して、以下を実行する。
1. realsense
```
source /opt/ros/noetic/setup.bash
source ~/onishi_youbot_ws/devel/setup.bash
cd onishi_youbot_ws/
roslaunch realsense2_camera cubeslam_camera.launch
```
2. YOLOv5
```
source /opt/ros/noetic/setup.bash
source ~/onishi_youbot_ws/devel/setup.bash
cd onishi_youbot_ws/
rosrun yolov5_ros cubeslam2.py
```
3. Cube SLAM
```
source /opt/ros/noetic/setup.bash
source ~/onishi_youbot_ws/devel/setup.bash
cd onishi_youbot_ws/
roslaunch detect_3d_cuboid detect_3d_cuboid.launch
```
4. 物体の中心座標取得
```
source /opt/ros/noetic/setup.bash
source ~/onishi_youbot_ws/devel/setup.bash
cd onishi_youbot_ws/
roslaunch youbot_do mecanum2_object_callback.launch
```
5. 座標変換（カメラからメカナムベース）
```
source /opt/ros/noetic/setup.bash
source ~/onishi_youbot_ws/devel/setup.bash
cd onishi_youbot_ws/
rosrun youbot_do object_subscriber_with_transform
```
6. ステータス表示
```
source /opt/ros/noetic/setup.bash
source ~/onishi_youbot_ws/devel/setup.bash
cd onishi_youbot_ws/
rosrun youbot_do show_text_on_image_node
```

分割ではなく、追加で新規ターミナルを開いて以下を実行する。

* D-optimality計算アクション
```
source /opt/ros/galactic/setup.bash
source ~/kameyama_galactic_ws_2/install/setup.bash
ros2 launch mecanum_action mecanum_action_launch.py
```
分割ではなく、追加で新規ターミナルを開いて以下を実行する。

* ROS1_bridge
```
source ~/ros1_bridge_ws/install/setup.bash
rosparam load ~/ros1_bridge_ws/bridge_youbot.yaml
ros2 run ros1_bridge parameter_bridge __name:=pc2_bridge
```
# AMIR の動作手順
## dars-note-021

まずはアームをセットアップを行う。MiniPCを起動したら、アーム、ローバー、LiDARの順にUSBを接続しなければいけない。

1. ターミナルを６つ用意して、MiniPCにSSH接続する（パスワード:root）
```
ssh rover@192.168.11.10 -X
```
2. ドライバを起動する（AMIRマニピュレータ側）
* **赤ボタンを解除する**
* **解除したら、すぐにドライバ起動コマンドを打つ**
* **マイコン基盤が黄色の点滅をしていたら,タイムオーバーなのでやり直す**
```
cd amir_basic_ws
source ~/amir_basic_ws/install/local_setup.bash
sudo chmod 666 /dev/ttyUSB0
ros2 run micro_ros_agent micro_ros_agent serial --dev /dev/ttyUSB0 -v6
```

続いて、Mecanum Rover 3.0 のセットアップを行う。

4. メカナムドライバ
```
cd uros_ws
source ~/uros_ws/install/local_setup.bash
sudo chmod 666 /dev/ttyUSB1
ros2 run micro_ros_agent micro_ros_agent serial --dev /dev/ttyUSB1 -v4
```
5. ROSトピック配信
``` 
source ~/ros2_ws/install/local_setup.bash
ros2 launch mecanumrover3_bringup robot.launch.py 
```
6. ROSトピック配信
```
source ~/kameyama_ws/install/local_setup.bash
ros2 launch my_utility odom_tf2_broadcaster.launch.py
```
7. LiDAR起動
```
sudo chmod 777 /dev/ttyUSB2
source ~/ros2_ws/install/local_setup.bash
ros2 launch ydlidar_ros2_driver ydlidar_launch.py
```
**ここからは、dars-note-021のターミナルで実行する。**

1. Little SLAM (AMIR)
```
source ~/kameyama_ws/install/local_setup.bash
ros2 launch littleslam_ros2 littleslam_launch.py 
```
2. Little SLAM (Mecanum2)
```
source ~/humble_ws/install/local_setup.bash
ros2 launch littleslam_ros2 littleslam_launch.py 
```
3. Imuから姿勢推定
```
source ~/kameyama_ws/install/local_setup.bash
ros2 run imu_filter_madgwick imu_filter_madgwick_node --ros-args -p use_mag:=False -p world_frame:=enu -p publish_tf:=False -r imu/data_raw:=/mecanum2/camera/imu
```
4. /base_pose ベース座標からワールド座標へ変換
```
source ~/humble_ws/install/setup.bash
ros2 run mecanum_proc base_to_world
```
### 行動計画モジュール（BTの一部機能使用）
1. Action Launch
```
cd amir_kameyama_ws/src/amir_operation/launch
source ~/amir_kameyama_ws/install/local_setup.bash
ros2 launch amir_operation pick_and_place_dop_launch.py
```
2. Behavior Tree Executor
```
source ~/amir_kameyama_ws/install/local_setup.bash
ros2 launch ros2_behavior_tree bt_executor_launch.py
```
**以下の Send Xml を実行するとロボットが行動開始するので注意する。**

3. Send Xml
```
source ~/amir_kameyama_ws/install/local_setup.bash
ros2 launch bt_generator bt_send_xml_launch.py
```
# コマンド一覧
* シャットダウン
```
sudo shutdown -h now
```
* バッテリー残量確認
```
ros2 topic echo /rover_sensor 
```

# エラー対処一覧
* **dars-note-002/kameyama_galactic_ws、kameyama_galactic_ws_2**のGalactic環境で**ColconBuild**をする際、**setuptoolでエラー**が出る場合がある。setuptoolのバージョンを以下で指定する。
```
pip3 install setuptools==45.2.0
```
