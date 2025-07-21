# 動作手順
## モニタリングロボット
### dars-note-002　メカナムローバー起動
1. ターミナルを5つ用意して、JetsonにSSH接続（パスワード:dars）
```
ssh agx@192.168.11.4 -X
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

### 画像処理
# １．realsense起動
source /opt/ros/noetic/setup.bash
source ~/onishi_youbot_ws/devel/setup.bash
cd onishi_youbot_ws/
roslaunch realsense2_camera cubeslam_camera.launch
# ２．YOLO
source /opt/ros/noetic/setup.bash
source ~/onishi_youbot_ws/devel/setup.bash
cd onishi_youbot_ws/
rosrun yolov5_ros cubeslam2.py
# ３．直方体検出のみ
source /opt/ros/noetic/setup.bash
source ~/onishi_youbot_ws/devel/setup.bash
cd onishi_youbot_ws/
roslaunch detect_3d_cuboid detect_3d_cuboid.launch
# ４．object callback
source /opt/ros/noetic/setup.bash
source ~/onishi_youbot_ws/devel/setup.bash
cd onishi_youbot_ws/
roslaunch youbot_do mecanum2_object_callback.launch
# ５．座標変換（カメラからメカナムベース）
source /opt/ros/noetic/setup.bash
source ~/onishi_youbot_ws/devel/setup.bash
cd onishi_youbot_ws/
rosrun youbot_do object_subscriber_with_transform 
# ROS1_bridge（別ターミナル）
source ~/ros1_bridge_ws/install/setup.bash
rosparam load ~/ros1_bridge_ws/bridge_youbot.yaml
ros2 run ros1_bridge parameter_bridge __name:=pc2_bridge

# コマンド一覧
1. シャットダウン
``` sudo shutdown -h now

# 開発環境バージョン一覧（das-note-021 @ 2025-07-21）

## OS・ハードウェア情報
- OS: Ubuntu 22.04 LTS
- カーネル: 6.8.0-60-generic
- ホスト名: das-note-021
- アーキテクチャ: x86_64

## 開発ツール
| ツール       | バージョン        |
|--------------|-------------------|
| GCC          | 11.4.0            |
| G++          | 11.4.0            |
| CMake        | 3.22.1            |
| Python3      | 3.10.12           |
| pip3         | 22.0.2            |

## ROS 環境
- ROS 2 Distro: **Humble Hawksbill**
- カスタムパッケージ：`behavior-tree-msgs`, `failure-detection`, `ros2-aruco`, `bt-generator` ほか
- colconビルド環境・ament系ツール群完備
- 主なインストール済みパッケージ:
  - `rclpy`, `geometry-msgs`, `nav2-msgs`, `moveit-msgs`, `cv-bridge`, `sensor-msgs`, `rosidl-*`

## Pythonライブラリ
| ライブラリ   | バージョン        |
|--------------|-------------------|
| NumPy        | 1.21.5            |
| OpenCV       | 4.5.4             |
| matplotlib   | 3.5.1             |
| SciPy        | 1.8.0             |
| cv-bridge    | 3.2.1             |

## colcon / ament 環境
- colcon-core: 0.19.0
- colcon-common-extensions: 0.3.0
- ament-cmake: 多数導入済（`ament-cmake-test`, `ament-cppcheck`, `ament-package` など）

## GPU / CUDA 環境
| 項目              | 内容                               |
|-------------------|------------------------------------|
| GPU               | NVIDIA GeForce RTX 4050 Laptop GPU |
| ドライババージョン | 550.144.03                         |
| CUDA バージョン   | 12.4                               |
| CUDA Toolkit      | release 12.4, V12.4.99             |
| `nvidia-smi`      | 動作確認済                         |
| `nvcc`            | 動作確認済                         |
