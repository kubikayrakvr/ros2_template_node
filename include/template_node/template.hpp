#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <chrono>

class Template_Node : public rclcpp::Node
{

private:
public:
    Template_Node(const std::string &node_name);
    ~Template_Node() = default;

    void init();

    // SUBSCRIBER
    // rclcpp::Subscription<std_msgs::msg::String>::SharedPtr m_subscription;
    // void topicCallback(const std_msgs::msg::String::SharedPtr msg);

    // PUBLISHER
    // void timerCallback(); 
    // rclcpp::TimerBase::SharedPtr m_timer;
    // rclcpp::Publisher<std_msgs::msg::String>::SharedPtr m_publisher;
};