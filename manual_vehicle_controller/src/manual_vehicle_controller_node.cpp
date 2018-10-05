// headers for ros
#include <ros/ros.h>

int main(int argc, char *argv[])
{
  ros::init(argc, argv, "manual_vehicle_controller");
  ros::spin();
  return 0;
}