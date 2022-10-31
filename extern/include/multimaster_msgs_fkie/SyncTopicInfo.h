// Generated by gencpp from file multimaster_msgs_fkie/SyncTopicInfo.msg
// DO NOT EDIT!


#ifndef MULTIMASTER_MSGS_FKIE_MESSAGE_SYNCTOPICINFO_H
#define MULTIMASTER_MSGS_FKIE_MESSAGE_SYNCTOPICINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace multimaster_msgs_fkie
{
template <class ContainerAllocator>
struct SyncTopicInfo_
{
  typedef SyncTopicInfo_<ContainerAllocator> Type;

  SyncTopicInfo_()
    : topic()
    , node()
    , nodeuri()  {
    }
  SyncTopicInfo_(const ContainerAllocator& _alloc)
    : topic(_alloc)
    , node(_alloc)
    , nodeuri(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _topic_type;
  _topic_type topic;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _node_type;
  _node_type node;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _nodeuri_type;
  _nodeuri_type nodeuri;





  typedef boost::shared_ptr< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> const> ConstPtr;

}; // struct SyncTopicInfo_

typedef ::multimaster_msgs_fkie::SyncTopicInfo_<std::allocator<void> > SyncTopicInfo;

typedef boost::shared_ptr< ::multimaster_msgs_fkie::SyncTopicInfo > SyncTopicInfoPtr;
typedef boost::shared_ptr< ::multimaster_msgs_fkie::SyncTopicInfo const> SyncTopicInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace multimaster_msgs_fkie

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'multimaster_msgs_fkie': ['/tmp/binarydeb/ros-kinetic-multimaster-msgs-fkie-0.8.12/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1b296160d6f5a9d7f6550f6130da2ba4";
  }

  static const char* value(const ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1b296160d6f5a9d7ULL;
  static const uint64_t static_value2 = 0xf6550f6130da2ba4ULL;
};

template<class ContainerAllocator>
struct DataType< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "multimaster_msgs_fkie/SyncTopicInfo";
  }

  static const char* value(const ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string topic\n\
string node\n\
string nodeuri\n\
";
  }

  static const char* value(const ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.topic);
      stream.next(m.node);
      stream.next(m.nodeuri);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SyncTopicInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::multimaster_msgs_fkie::SyncTopicInfo_<ContainerAllocator>& v)
  {
    s << indent << "topic: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.topic);
    s << indent << "node: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.node);
    s << indent << "nodeuri: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.nodeuri);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MULTIMASTER_MSGS_FKIE_MESSAGE_SYNCTOPICINFO_H
