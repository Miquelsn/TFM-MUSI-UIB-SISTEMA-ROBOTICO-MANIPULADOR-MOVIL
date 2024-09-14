// Generated by gencpp from file propio/StartPickAndPlaceResponse.msg
// DO NOT EDIT!


#ifndef PROPIO_MESSAGE_STARTPICKANDPLACERESPONSE_H
#define PROPIO_MESSAGE_STARTPICKANDPLACERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace propio
{
template <class ContainerAllocator>
struct StartPickAndPlaceResponse_
{
  typedef StartPickAndPlaceResponse_<ContainerAllocator> Type;

  StartPickAndPlaceResponse_()
    : success(false)  {
    }
  StartPickAndPlaceResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct StartPickAndPlaceResponse_

typedef ::propio::StartPickAndPlaceResponse_<std::allocator<void> > StartPickAndPlaceResponse;

typedef boost::shared_ptr< ::propio::StartPickAndPlaceResponse > StartPickAndPlaceResponsePtr;
typedef boost::shared_ptr< ::propio::StartPickAndPlaceResponse const> StartPickAndPlaceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::propio::StartPickAndPlaceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::propio::StartPickAndPlaceResponse_<ContainerAllocator1> & lhs, const ::propio::StartPickAndPlaceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::propio::StartPickAndPlaceResponse_<ContainerAllocator1> & lhs, const ::propio::StartPickAndPlaceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace propio

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::propio::StartPickAndPlaceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "propio/StartPickAndPlaceResponse";
  }

  static const char* value(const ::propio::StartPickAndPlaceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
;
  }

  static const char* value(const ::propio::StartPickAndPlaceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StartPickAndPlaceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::propio::StartPickAndPlaceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::propio::StartPickAndPlaceResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PROPIO_MESSAGE_STARTPICKANDPLACERESPONSE_H
