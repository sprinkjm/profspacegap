#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "profspacegap_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block profspacegap/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_profspacegap_std_msgs_Float64> Sub_profspacegap_2;

// For Block profspacegap/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_profspacegap_std_msgs_Float64> Pub_profspacegap_4;

void slros_node_init(int argc, char** argv);

#endif
