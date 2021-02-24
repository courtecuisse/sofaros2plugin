#pragma once

#include <sofa/core/objectmodel/BaseObject.h>

#include <functional>
#include <memory>
#include <string>
#include <thread>

#include "rclcpp/rclcpp.hpp"


namespace sofa {
    namespace ros2 {

        class ROS2Context : public core::objectmodel::BaseObject {
        public:
            SOFA_CLASS(ROS2Context, core::objectmodel::BaseObject);

            ROS2Context() {};

            virtual ~ROS2Context() {};

            virtual void init() { rclcpp::init(0, nullptr); }

            virtual void cleanup() { rclcpp::shutdown(); }
        };

    }  // namespace ros2
}  // end namespace sofa