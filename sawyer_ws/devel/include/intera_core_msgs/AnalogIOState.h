// Generated by gencpp from file intera_core_msgs/AnalogIOState.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_ANALOGIOSTATE_H
#define INTERA_CORE_MSGS_MESSAGE_ANALOGIOSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace intera_core_msgs
{
template <class ContainerAllocator>
struct AnalogIOState_
{
  typedef AnalogIOState_<ContainerAllocator> Type;

  AnalogIOState_()
    : timestamp()
    , value(0.0)
    , isInputOnly(false)  {
    }
  AnalogIOState_(const ContainerAllocator& _alloc)
    : timestamp()
    , value(0.0)
    , isInputOnly(false)  {
  (void)_alloc;
    }



   typedef ros::Time _timestamp_type;
  _timestamp_type timestamp;

   typedef double _value_type;
  _value_type value;

   typedef uint8_t _isInputOnly_type;
  _isInputOnly_type isInputOnly;





  typedef boost::shared_ptr< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> const> ConstPtr;

}; // struct AnalogIOState_

typedef ::intera_core_msgs::AnalogIOState_<std::allocator<void> > AnalogIOState;

typedef boost::shared_ptr< ::intera_core_msgs::AnalogIOState > AnalogIOStatePtr;
typedef boost::shared_ptr< ::intera_core_msgs::AnalogIOState const> AnalogIOStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::AnalogIOState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'intera_core_msgs': ['/home/cthornton/sawyer_ws/src/intera_common/intera_core_msgs/msg', '/home/cthornton/sawyer_ws/devel/share/intera_core_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "39af371963dc9e4447e91f430c720b33";
  }

  static const char* value(const ::intera_core_msgs::AnalogIOState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x39af371963dc9e44ULL;
  static const uint64_t static_value2 = 0x47e91f430c720b33ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/AnalogIOState";
  }

  static const char* value(const ::intera_core_msgs::AnalogIOState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time timestamp\n\
float64 value\n\
bool isInputOnly\n\
";
  }

  static const char* value(const ::intera_core_msgs::AnalogIOState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.timestamp);
      stream.next(m.value);
      stream.next(m.isInputOnly);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AnalogIOState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::AnalogIOState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::AnalogIOState_<ContainerAllocator>& v)
  {
    s << indent << "timestamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.timestamp);
    s << indent << "value: ";
    Printer<double>::stream(s, indent + "  ", v.value);
    s << indent << "isInputOnly: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isInputOnly);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_ANALOGIOSTATE_H
