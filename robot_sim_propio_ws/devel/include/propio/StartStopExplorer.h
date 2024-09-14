// Generated by gencpp from file propio/StartStopExplorer.msg
// DO NOT EDIT!


#ifndef PROPIO_MESSAGE_STARTSTOPEXPLORER_H
#define PROPIO_MESSAGE_STARTSTOPEXPLORER_H

#include <ros/service_traits.h>


#include <propio/StartStopExplorerRequest.h>
#include <propio/StartStopExplorerResponse.h>


namespace propio
{

struct StartStopExplorer
{

typedef StartStopExplorerRequest Request;
typedef StartStopExplorerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct StartStopExplorer
} // namespace propio


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::propio::StartStopExplorer > {
  static const char* value()
  {
    return "676aa7bfb3ec2071e814f2368dfd5fb5";
  }

  static const char* value(const ::propio::StartStopExplorer&) { return value(); }
};

template<>
struct DataType< ::propio::StartStopExplorer > {
  static const char* value()
  {
    return "propio/StartStopExplorer";
  }

  static const char* value(const ::propio::StartStopExplorer&) { return value(); }
};


// service_traits::MD5Sum< ::propio::StartStopExplorerRequest> should match
// service_traits::MD5Sum< ::propio::StartStopExplorer >
template<>
struct MD5Sum< ::propio::StartStopExplorerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::propio::StartStopExplorer >::value();
  }
  static const char* value(const ::propio::StartStopExplorerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::propio::StartStopExplorerRequest> should match
// service_traits::DataType< ::propio::StartStopExplorer >
template<>
struct DataType< ::propio::StartStopExplorerRequest>
{
  static const char* value()
  {
    return DataType< ::propio::StartStopExplorer >::value();
  }
  static const char* value(const ::propio::StartStopExplorerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::propio::StartStopExplorerResponse> should match
// service_traits::MD5Sum< ::propio::StartStopExplorer >
template<>
struct MD5Sum< ::propio::StartStopExplorerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::propio::StartStopExplorer >::value();
  }
  static const char* value(const ::propio::StartStopExplorerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::propio::StartStopExplorerResponse> should match
// service_traits::DataType< ::propio::StartStopExplorer >
template<>
struct DataType< ::propio::StartStopExplorerResponse>
{
  static const char* value()
  {
    return DataType< ::propio::StartStopExplorer >::value();
  }
  static const char* value(const ::propio::StartStopExplorerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PROPIO_MESSAGE_STARTSTOPEXPLORER_H
