#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "profspacegap";

// For Block profspacegap/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_profspacegap_std_msgs_Float64> Sub_profspacegap_2;

// For Block profspacegap/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_profspacegap_std_msgs_Float64> Pub_profspacegap_4;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

