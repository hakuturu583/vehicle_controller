#include <manual_vehicle_controller/manual_vehicle_controller.h>

manual_vehicle_controller::manual_vehicle_controller()
{
    nh_.getParam(ros::this_node::getName(), parameters_);
    values_.accel = boost::none;
    joy_sub_ = nh_.subscribe("chatter", 1, &manual_vehicle_controller::joy_callback_, this);
}

manual_vehicle_controller::~manual_vehicle_controller()
{
    
}

void manual_vehicle_controller::joy_callback_(const sensor_msgs::JoyConstPtr msg)
{
    return;
}