// Generated by gencpp from file boeing_gazebo_model_attachment_plugin/AttachResponse.msg
// DO NOT EDIT!


#ifndef BOEING_GAZEBO_MODEL_ATTACHMENT_PLUGIN_MESSAGE_ATTACHRESPONSE_H
#define BOEING_GAZEBO_MODEL_ATTACHMENT_PLUGIN_MESSAGE_ATTACHRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace boeing_gazebo_model_attachment_plugin
{
template <class ContainerAllocator>
struct AttachResponse_
{
  typedef AttachResponse_<ContainerAllocator> Type;

  AttachResponse_()
    : success(false)
    , message()  {
    }
  AttachResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> const> ConstPtr;

}; // struct AttachResponse_

typedef ::boeing_gazebo_model_attachment_plugin::AttachResponse_<std::allocator<void> > AttachResponse;

typedef boost::shared_ptr< ::boeing_gazebo_model_attachment_plugin::AttachResponse > AttachResponsePtr;
typedef boost::shared_ptr< ::boeing_gazebo_model_attachment_plugin::AttachResponse const> AttachResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator1> & lhs, const ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator1> & lhs, const ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace boeing_gazebo_model_attachment_plugin

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "937c9679a518e3a18d831e57125ea522";
  }

  static const char* value(const ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x937c9679a518e3a1ULL;
  static const uint64_t static_value2 = 0x8d831e57125ea522ULL;
};

template<class ContainerAllocator>
struct DataType< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "boeing_gazebo_model_attachment_plugin/AttachResponse";
  }

  static const char* value(const ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"string message\n"
"\n"
"\n"
;
  }

  static const char* value(const ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AttachResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::boeing_gazebo_model_attachment_plugin::AttachResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BOEING_GAZEBO_MODEL_ATTACHMENT_PLUGIN_MESSAGE_ATTACHRESPONSE_H
