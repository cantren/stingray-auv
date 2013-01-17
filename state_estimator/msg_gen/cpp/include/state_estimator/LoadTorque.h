/* Auto-generated by genmsg_cpp for file /home/antonella/fuerte_workspace/sandbox/stingray-2-0/state_estimator/msg/LoadTorque.msg */
#ifndef STATE_ESTIMATOR_MESSAGE_LOADTORQUE_H
#define STATE_ESTIMATOR_MESSAGE_LOADTORQUE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace state_estimator
{
template <class ContainerAllocator>
struct LoadTorque_ {
  typedef LoadTorque_<ContainerAllocator> Type;

  LoadTorque_()
  : header()
  , loadTorque(0.0)
  {
  }

  LoadTorque_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , loadTorque(0.0)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef float _loadTorque_type;
  float loadTorque;


  typedef boost::shared_ptr< ::state_estimator::LoadTorque_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::state_estimator::LoadTorque_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LoadTorque
typedef  ::state_estimator::LoadTorque_<std::allocator<void> > LoadTorque;

typedef boost::shared_ptr< ::state_estimator::LoadTorque> LoadTorquePtr;
typedef boost::shared_ptr< ::state_estimator::LoadTorque const> LoadTorqueConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::state_estimator::LoadTorque_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::state_estimator::LoadTorque_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace state_estimator

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::state_estimator::LoadTorque_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::state_estimator::LoadTorque_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::state_estimator::LoadTorque_<ContainerAllocator> > {
  static const char* value() 
  {
    return "447615d19c1cd0ce80f6148a6b1acf94";
  }

  static const char* value(const  ::state_estimator::LoadTorque_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x447615d19c1cd0ceULL;
  static const uint64_t static_value2 = 0x80f6148a6b1acf94ULL;
};

template<class ContainerAllocator>
struct DataType< ::state_estimator::LoadTorque_<ContainerAllocator> > {
  static const char* value() 
  {
    return "state_estimator/LoadTorque";
  }

  static const char* value(const  ::state_estimator::LoadTorque_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::state_estimator::LoadTorque_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
float32 loadTorque\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::state_estimator::LoadTorque_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::state_estimator::LoadTorque_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::state_estimator::LoadTorque_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::state_estimator::LoadTorque_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.loadTorque);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LoadTorque_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::state_estimator::LoadTorque_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::state_estimator::LoadTorque_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "loadTorque: ";
    Printer<float>::stream(s, indent + "  ", v.loadTorque);
  }
};


} // namespace message_operations
} // namespace ros

#endif // STATE_ESTIMATOR_MESSAGE_LOADTORQUE_H
