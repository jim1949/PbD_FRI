/* Auto-generated by genmsg_cpp for file /home/intelligentrobotics/ws/orocos/motion_control/motion_control_msgs/msg/JointVelocities.msg */
#ifndef MOTION_CONTROL_MSGS_BOOST_SERIALIZATION_JOINTVELOCITIES_H
#define MOTION_CONTROL_MSGS_BOOST_SERIALIZATION_JOINTVELOCITIES_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <motion_control_msgs/JointVelocities.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::motion_control_msgs::JointVelocities_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("names",m.names);
    a & make_nvp("velocities",m.velocities);
}

} // namespace serialization
} // namespace boost

#endif // MOTION_CONTROL_MSGS_BOOST_SERIALIZATION_JOINTVELOCITIES_H

