#pragma once

#include <ROS2Plugin/ROS2Context.h>
#include <ROS2Plugin/Subscribers/ROS2SubscriberBase.h>
#include <ROS2Plugin/toolbox.h>
#include <ROS2Plugin/types.h>

namespace sofa {
namespace ros2 {
class ROS2PoseSubscriber : public ROS2SubscriberBase<Rigid, PoseMsg> {
   public:
    using SofaType = Rigid;
    using ROS2Type = PoseMsg;

    SOFA_CLASS(ROS2PoseSubscriber, SOFA_TEMPLATE2(ROS2SubscriberBase, SofaType, ROS2Type));
    explicit ROS2PoseSubscriber() : ROS2SubscriberBase(){};
};

}  // namespace ros2
}  // end namespace sofa
