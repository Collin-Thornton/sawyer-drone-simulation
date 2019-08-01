// Generated by gencpp from file intera_core_msgs/CalibrationCommandGoal.msg
// DO NOT EDIT!


#ifndef INTERA_CORE_MSGS_MESSAGE_CALIBRATIONCOMMANDGOAL_H
#define INTERA_CORE_MSGS_MESSAGE_CALIBRATIONCOMMANDGOAL_H


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
struct CalibrationCommandGoal_
{
  typedef CalibrationCommandGoal_<ContainerAllocator> Type;

  CalibrationCommandGoal_()
    : command()  {
    }
  CalibrationCommandGoal_(const ContainerAllocator& _alloc)
    : command(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;




  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CALIBRATION_START;
  static const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  CALIBRATION_STOP;

  typedef boost::shared_ptr< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> const> ConstPtr;

}; // struct CalibrationCommandGoal_

typedef ::intera_core_msgs::CalibrationCommandGoal_<std::allocator<void> > CalibrationCommandGoal;

typedef boost::shared_ptr< ::intera_core_msgs::CalibrationCommandGoal > CalibrationCommandGoalPtr;
typedef boost::shared_ptr< ::intera_core_msgs::CalibrationCommandGoal const> CalibrationCommandGoalConstPtr;

// constants requiring out of line definition

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CalibrationCommandGoal_<ContainerAllocator>::CALIBRATION_START =
        
          "start"
        
        ;
   

   
   template<typename ContainerAllocator> const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > 
      CalibrationCommandGoal_<ContainerAllocator>::CALIBRATION_STOP =
        
          "stop"
        
        ;
   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace intera_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'intera_core_msgs': ['/home/cthornton/sawyer_ws/src/intera_common/intera_core_msgs/msg', '/home/cthornton/sawyer_ws/devel/share/intera_core_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "962c822c3313ec34ac61f8caca5d4248";
  }

  static const char* value(const ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x962c822c3313ec34ULL;
  static const uint64_t static_value2 = 0xac61f8caca5d4248ULL;
};

template<class ContainerAllocator>
struct DataType< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "intera_core_msgs/CalibrationCommandGoal";
  }

  static const char* value(const ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# Engine command goal\n\
string command\n\
string CALIBRATION_START=start\n\
string CALIBRATION_STOP=stop\n\
\n\
";
  }

  static const char* value(const ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CalibrationCommandGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::intera_core_msgs::CalibrationCommandGoal_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // INTERA_CORE_MSGS_MESSAGE_CALIBRATIONCOMMANDGOAL_H
