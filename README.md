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
  - `rclpy`, `geometry-msgs`, `nav2-msgs`, `moveit-msgs`, `turtlebot3-msgs`, `cv-bridge`, `sensor-msgs`, `rosidl-*`

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

