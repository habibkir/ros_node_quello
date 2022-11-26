#include"ros/ros.h"
#include"std_msgs/String.h"

void chatCallback(const std_msgs::String::ConstPtr& msg) {
	ROS_INFO("Ho sentito un $<%s>",msg->data.c_str());
}

int main(int argc, char** argv) {
	ros::init(argc, argv, "subs");

	ros::NodeHandle node_handle;
	ros::Subscriber sub = node_handle.subscribe("chat",1000,chatCallback);

	ros::spin();
	return 0;
}
