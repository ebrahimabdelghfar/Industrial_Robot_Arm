// Generated by gencpp from file service_method/add.msg
// DO NOT EDIT!


#ifndef SERVICE_METHOD_MESSAGE_ADD_H
#define SERVICE_METHOD_MESSAGE_ADD_H

#include <ros/service_traits.h>


#include <service_method/addRequest.h>
#include <service_method/addResponse.h>


namespace service_method
{

struct add
{

typedef addRequest Request;
typedef addResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct add
} // namespace service_method


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::service_method::add > {
  static const char* value()
  {
    return "5a345c58fdab03aeff049471a3312360";
  }

  static const char* value(const ::service_method::add&) { return value(); }
};

template<>
struct DataType< ::service_method::add > {
  static const char* value()
  {
    return "service_method/add";
  }

  static const char* value(const ::service_method::add&) { return value(); }
};


// service_traits::MD5Sum< ::service_method::addRequest> should match
// service_traits::MD5Sum< ::service_method::add >
template<>
struct MD5Sum< ::service_method::addRequest>
{
  static const char* value()
  {
    return MD5Sum< ::service_method::add >::value();
  }
  static const char* value(const ::service_method::addRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::service_method::addRequest> should match
// service_traits::DataType< ::service_method::add >
template<>
struct DataType< ::service_method::addRequest>
{
  static const char* value()
  {
    return DataType< ::service_method::add >::value();
  }
  static const char* value(const ::service_method::addRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::service_method::addResponse> should match
// service_traits::MD5Sum< ::service_method::add >
template<>
struct MD5Sum< ::service_method::addResponse>
{
  static const char* value()
  {
    return MD5Sum< ::service_method::add >::value();
  }
  static const char* value(const ::service_method::addResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::service_method::addResponse> should match
// service_traits::DataType< ::service_method::add >
template<>
struct DataType< ::service_method::addResponse>
{
  static const char* value()
  {
    return DataType< ::service_method::add >::value();
  }
  static const char* value(const ::service_method::addResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SERVICE_METHOD_MESSAGE_ADD_H
