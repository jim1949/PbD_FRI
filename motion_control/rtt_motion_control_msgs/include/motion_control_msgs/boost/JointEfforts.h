/* Auto-generated by genmsg_cpp for file /home/intelligentrobotics/ws/orocos/motion_control/motion_control_msgs/msg/JointEfforts.msg */
#ifndef MOTION_CONTROL_MSGS_BOOST_SERIALIZATION_JOINTEFFORTS_H
#define MOTION_CONTROL_MSGS_BOOST_SERIALIZATION_JOINTEFFORTS_H

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <motion_control_msgs/JointEfforts.h>

namespace boost
{
namespace serialization
{

template<class Archive, class ContainerAllocator>
void serialize(Archive& a,  ::motion_control_msgs::JointEfforts_<ContainerAllocator>  & m, unsigned int)
{
    a & make_nvp("names",m.names);
    a & make_nvp("efforts",m.efforts);
}

} // namespace serialization
} // namespace boost

#endif // MOTION_CONTROL_MSGS_BOOST_SERIALIZATION_JOINTEFFORTS_H

