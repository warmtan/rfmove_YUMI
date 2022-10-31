// Generated by gencpp from file turtlesim/SpawnResponse.msg
// DO NOT EDIT!


#ifndef TURTLESIM_MESSAGE_SPAWNRESPONSE_H
#define TURTLESIM_MESSAGE_SPAWNRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlesim
{
template <class ContainerAllocator>
struct SpawnResponse_
{
  typedef SpawnResponse_<ContainerAllocator> Type;

  SpawnResponse_()
    : name()  {
    }
  SpawnResponse_(const ContainerAllocator& _alloc)
    : name(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;





  typedef boost::shared_ptr< ::turtlesim::SpawnResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlesim::SpawnResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SpawnResponse_

typedef ::turtlesim::SpawnResponse_<std::allocator<void> > SpawnResponse;

typedef boost::shared_ptr< ::turtlesim::SpawnResponse > SpawnResponsePtr;
typedef boost::shared_ptr< ::turtlesim::SpawnResponse const> SpawnResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlesim::SpawnResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlesim::SpawnResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlesim

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'turtlesim': ['/tmp/binarydeb/ros-kinetic-turtlesim-0.7.1/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::SpawnResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::SpawnResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim::SpawnResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim::SpawnResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::SpawnResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::SpawnResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlesim::SpawnResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1f3d28f1b044c871e6eff2e9fc3c667";
  }

  static const char* value(const ::turtlesim::SpawnResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1f3d28f1b044c87ULL;
  static const uint64_t static_value2 = 0x1e6eff2e9fc3c667ULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlesim::SpawnResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlesim/SpawnResponse";
  }

  static const char* value(const ::turtlesim::SpawnResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlesim::SpawnResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
";
  }

  static const char* value(const ::turtlesim::SpawnResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlesim::SpawnResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SpawnResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlesim::SpawnResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlesim::SpawnResponse_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLESIM_MESSAGE_SPAWNRESPONSE_H
