// Generated by gencpp from file avoid_obstacle/DetectedObstacles.msg
// DO NOT EDIT!


#ifndef AVOID_OBSTACLE_MESSAGE_DETECTEDOBSTACLES_H
#define AVOID_OBSTACLE_MESSAGE_DETECTEDOBSTACLES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <avoid_obstacle/PointObstacles.h>

namespace avoid_obstacle
{
template <class ContainerAllocator>
struct DetectedObstacles_
{
  typedef DetectedObstacles_<ContainerAllocator> Type;

  DetectedObstacles_()
    : obstacles()  {
    }
  DetectedObstacles_(const ContainerAllocator& _alloc)
    : obstacles(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::avoid_obstacle::PointObstacles_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::avoid_obstacle::PointObstacles_<ContainerAllocator> >::other >  _obstacles_type;
  _obstacles_type obstacles;





  typedef boost::shared_ptr< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> const> ConstPtr;

}; // struct DetectedObstacles_

typedef ::avoid_obstacle::DetectedObstacles_<std::allocator<void> > DetectedObstacles;

typedef boost::shared_ptr< ::avoid_obstacle::DetectedObstacles > DetectedObstaclesPtr;
typedef boost::shared_ptr< ::avoid_obstacle::DetectedObstacles const> DetectedObstaclesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::avoid_obstacle::DetectedObstacles_<ContainerAllocator1> & lhs, const ::avoid_obstacle::DetectedObstacles_<ContainerAllocator2> & rhs)
{
  return lhs.obstacles == rhs.obstacles;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::avoid_obstacle::DetectedObstacles_<ContainerAllocator1> & lhs, const ::avoid_obstacle::DetectedObstacles_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace avoid_obstacle

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fa7a17ca5db5a73d6a4b2807ae3490ab";
  }

  static const char* value(const ::avoid_obstacle::DetectedObstacles_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfa7a17ca5db5a73dULL;
  static const uint64_t static_value2 = 0x6a4b2807ae3490abULL;
};

template<class ContainerAllocator>
struct DataType< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> >
{
  static const char* value()
  {
    return "avoid_obstacle/DetectedObstacles";
  }

  static const char* value(const ::avoid_obstacle::DetectedObstacles_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> >
{
  static const char* value()
  {
    return "avoid_obstacle/PointObstacles[] obstacles\n"
"\n"
"================================================================================\n"
"MSG: avoid_obstacle/PointObstacles\n"
"float64 x                       # Central point X [m]\n"
"float64 y                       # Central point Y [m]\n"
"float64 radius                  # Radius with added margin [m]\n"
"float64 true_radius             # True measured radius [m]\n"
;
  }

  static const char* value(const ::avoid_obstacle::DetectedObstacles_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.obstacles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectedObstacles_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::avoid_obstacle::DetectedObstacles_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::avoid_obstacle::DetectedObstacles_<ContainerAllocator>& v)
  {
    s << indent << "obstacles[]" << std::endl;
    for (size_t i = 0; i < v.obstacles.size(); ++i)
    {
      s << indent << "  obstacles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::avoid_obstacle::PointObstacles_<ContainerAllocator> >::stream(s, indent + "    ", v.obstacles[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AVOID_OBSTACLE_MESSAGE_DETECTEDOBSTACLES_H