cmake_minimum_required(VERSION 3.0.2)
project(traffic_sim_project_group_2)

find_package(catkin REQUIRED COMPONENTS
roscpp
dynamic_reconfigure
image_transport
image_geometry
cv_bridge
tf2_ros
tf2_geometry_msgs
pcl_ros
)
find_package(OpenCV REQUIRED)

generate_dynamic_reconfigure_options(
  cfg/LaneDetection.cfg
)
catkin_package(
  DEPENDS OpenCV
)


include_directories(
  ${catkin_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)

add_executable(traffic_sim_project_group_2
  src/lane_detection.cpp
  src/lane_detection_node.cpp  
)
add_dependencies(traffic_sim_project_group_2
  ${catkin_EXPORTED_TARGETS}
  ${PROJECT_NAME}_gencfg
)
target_link_libraries(traffic_sim_project_group_2
  ${catkin_LIBRARIES}
)
