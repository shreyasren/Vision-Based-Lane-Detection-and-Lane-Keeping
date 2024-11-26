// ROS and node class header file
#include <ros/ros.h>
#include "lane_detection.hpp"

int main(int argc, char** argv)
{
  // Initialize ROS and declare node handles
  ros::init(argc, argv, "traffic_sim_project_group_2");
  ros::NodeHandle n;
  ros::NodeHandle pn("~");
  
  // Instantiate node class
  traffic_sim_project_group_2::LaneDetection node(n, pn);

  // Spin and process callbacks
  ros::spin();
}
