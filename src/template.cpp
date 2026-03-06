#include "template_node/template.hpp"

Template_Node::Template_Node(const std::string &node_name) 
: rclcpp::Node(node_name, rclcpp::NodeOptions().automatically_declare_parameters_from_overrides(true))
{
    // SUBSCRIBER
    // auto qos = rclcpp::QoS(rclcpp::KeepLast(10));
    // m_subscription = this->create_subscription<std_msgs::msg::String>(
    //     "/chatter",
    //     qos,
    //     std::bind(&Template_Node::topicCallback, this, std::placeholders::_1));

    // PUBLISHER
    // m_publisher = this->create_publisher<std_msgs::msg::String>("/chatter", 1);
    // m_timer = this->create_wall_timer(
    //     std::chrono::milliseconds(500), 
    //     std::bind(&Template_Node::timerCallback, this)
    // );

    RCLCPP_INFO(this->get_logger(), "Node has been created.");
}

void Template_Node::init(){
    // PARAMETERS
    // int parameter_value;
    // this->get_parameter("template_parameter", parameter_value);
    // RCLCPP_INFO(this->get_logger(), "Pulled parameter: %d", parameter_value);

    RCLCPP_INFO(this->get_logger(), "Node has been initialized.");
}

// SUBSCRIBER
// void Template_Node::topicCallback(const std_msgs::msg::String::SharedPtr msg)
// {
//     RCLCPP_INFO(this->get_logger(), "Received message: %s", msg->data.c_str());
// }

// PUBLISHER
// void Template_Node::timerCallback()
// {
//     auto message = std_msgs::msg::String();
//     message.data = "I see you.";
    
//     RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
//     m_publisher->publish(message);
// }

