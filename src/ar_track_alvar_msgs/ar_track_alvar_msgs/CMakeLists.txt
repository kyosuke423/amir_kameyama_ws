cmake_minimum_required(VERSION 3.8)
project(ar_track_alvar_msgs)

# コンパイラ警告を厳しめに設定 (任意)
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# ament と rosidl 関連の依存パッケージを探す
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)

# メッセージ定義ファイルの指定
set(MSG_FILES
  "msg/AlvarMarker.msg"
  "msg/AlvarMarkers.msg"
)

# メッセージ生成
rosidl_generate_interfaces(${PROJECT_NAME}
  ${MSG_FILES}
  DEPENDENCIES geometry_msgs std_msgs
)

# テスト関連 (任意)
if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()
endif()

# パッケージ宣言
ament_package()
