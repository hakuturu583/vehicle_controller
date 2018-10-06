#ifndef MANUAL_VEHICLE_CONTROLLER_H_INCLUDED
#define MANUAL_VEHICLE_CONTROLLER_H_INCLUDED

//headers in ROS
#include <ros/ros.h>
#include <sensor_msgs/Joy.h>
#include <vehicle_controller_msgs/VehicleCommandStamped.h>

//headers in boost
#include <boost/optional.hpp>

struct command_values
{
    boost::optional<double> accel;
    boost::optional<double> brake;
    boost::optional<double> steer;
    boost::optional<uint8_t> handle_brake;
    boost::optional<uint8_t> lamp_status;
    boost::optional<uint8_t> indicator_status;
};

class manual_vehicle_controller
{
public:
    manual_vehicle_controller();
    ~manual_vehicle_controller();
private:
    void joy_callback_(const sensor_msgs::JoyConstPtr msg);
    ros::NodeHandle nh_;
    ros::Subscriber joy_sub_;
    XmlRpc::XmlRpcValue parameters_;
    command_values values_;
};
#endif  //MANUAL_VEHICLE_CONTROLLER_H_INCLUDED