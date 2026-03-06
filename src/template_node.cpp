#include <cstdio>
#include "rclcpp/rclcpp.hpp"
#include "template_node/template.hpp"

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);

    std::shared_ptr<Template_Node> t_Template_Node = std::make_shared<Template_Node>("template_node");

    t_Template_Node->init();

    rclcpp::spin(t_Template_Node);
    rclcpp::shutdown();

    return 0;
}