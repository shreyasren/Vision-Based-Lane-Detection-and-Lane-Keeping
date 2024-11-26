# Vision-Based Lane Detection and Lane Keeping 

## Plan

### *Implement vision-only lane keeping*

Instead of following the programmed route, try to use just the camera to detect the lane markings and then steer to the middle. This is relatively easy when there are two parallel lines, but how to deal with the merges?

#### Develope:
1. Reusing Traffic Sim Project
2. Reusing Lane Detection example
3. Add Logic to Detect Lane Center
4. Publish the Global frame waypoints to Lookahead and ACC Node
5. Add/Remove Traffic using Gazebo Simulator

#### Design:
1. Sekloton Report document is created in google docs and is shared to this group members
2. Add all the design/development related ideas in this document

#### Presentation:
1. Sekloton Presenation is created in google docs and is shared to this group members
2. Add Key points and design related items here. 

#### Test:
1. Run basic ROS Compile to ensure no compilation errors
2. Make sure to run Sanity check by using ROS Launch
3. Record user information like RQT graphs and screenshots in /UserData folder
4. Run the test in Parallel lines and the merges
5. Ensure not to collide on other Traffic


## Quick-Start Guide

To run the simulation, run the following launch command:
```
roslaunch sim_launch_group_2.launch
```
## Progress 
Completed:
1. Reuse Traffic Sim and 
2. Added Lane detection example. 
3. Compiled and Tested (Sanity check)
4. Added logic to detect Lane center 
2. Send this information to ACC node

Improvement:
1. Improve Lane detection when there are multiple lanes






