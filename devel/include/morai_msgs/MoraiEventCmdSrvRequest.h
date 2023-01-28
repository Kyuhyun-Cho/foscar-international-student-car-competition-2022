// Generated by gencpp from file morai_msgs/MoraiEventCmdSrvRequest.msg
// DO NOT EDIT!


#ifndef MORAI_MSGS_MESSAGE_MORAIEVENTCMDSRVREQUEST_H
#define MORAI_MSGS_MESSAGE_MORAIEVENTCMDSRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <morai_msgs/EventInfo.h>

namespace morai_msgs
{
template <class ContainerAllocator>
struct MoraiEventCmdSrvRequest_
{
  typedef MoraiEventCmdSrvRequest_<ContainerAllocator> Type;

  MoraiEventCmdSrvRequest_()
    : request()  {
    }
  MoraiEventCmdSrvRequest_(const ContainerAllocator& _alloc)
    : request(_alloc)  {
  (void)_alloc;
    }



   typedef  ::morai_msgs::EventInfo_<ContainerAllocator>  _request_type;
  _request_type request;





  typedef boost::shared_ptr< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoraiEventCmdSrvRequest_

typedef ::morai_msgs::MoraiEventCmdSrvRequest_<std::allocator<void> > MoraiEventCmdSrvRequest;

typedef boost::shared_ptr< ::morai_msgs::MoraiEventCmdSrvRequest > MoraiEventCmdSrvRequestPtr;
typedef boost::shared_ptr< ::morai_msgs::MoraiEventCmdSrvRequest const> MoraiEventCmdSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator1> & lhs, const ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.request == rhs.request;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator1> & lhs, const ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace morai_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "de5e52e7080efd2d8e185c1dcd1db112";
  }

  static const char* value(const ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xde5e52e7080efd2dULL;
  static const uint64_t static_value2 = 0x8e185c1dcd1db112ULL;
};

template<class ContainerAllocator>
struct DataType< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "morai_msgs/MoraiEventCmdSrvRequest";
  }

  static const char* value(const ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "EventInfo request\n"
"\n"
"================================================================================\n"
"MSG: morai_msgs/EventInfo\n"
"int8 option\n"
"int32 ctrl_mode\n"
"int32 gear\n"
"Lamps lamps\n"
"bool set_pause\n"
"\n"
"================================================================================\n"
"MSG: morai_msgs/Lamps\n"
"Header header\n"
"\n"
"int8 turnSignal\n"
"int8 emergencySignal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.request);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoraiEventCmdSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::morai_msgs::MoraiEventCmdSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "request: ";
    s << std::endl;
    Printer< ::morai_msgs::EventInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.request);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MORAI_MSGS_MESSAGE_MORAIEVENTCMDSRVREQUEST_H