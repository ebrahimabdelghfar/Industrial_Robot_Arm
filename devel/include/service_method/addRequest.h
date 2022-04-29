// Generated by gencpp from file service_method/addRequest.msg
// DO NOT EDIT!


#ifndef SERVICE_METHOD_MESSAGE_ADDREQUEST_H
#define SERVICE_METHOD_MESSAGE_ADDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace service_method
{
template <class ContainerAllocator>
struct addRequest_
{
  typedef addRequest_<ContainerAllocator> Type;

  addRequest_()
    : x(0.0)
    , y(0.0)  {
    }
  addRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;





  typedef boost::shared_ptr< ::service_method::addRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::service_method::addRequest_<ContainerAllocator> const> ConstPtr;

}; // struct addRequest_

typedef ::service_method::addRequest_<std::allocator<void> > addRequest;

typedef boost::shared_ptr< ::service_method::addRequest > addRequestPtr;
typedef boost::shared_ptr< ::service_method::addRequest const> addRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::service_method::addRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::service_method::addRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::service_method::addRequest_<ContainerAllocator1> & lhs, const ::service_method::addRequest_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::service_method::addRequest_<ContainerAllocator1> & lhs, const ::service_method::addRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace service_method

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::service_method::addRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::service_method::addRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service_method::addRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service_method::addRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service_method::addRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service_method::addRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::service_method::addRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ff8d7d66dd3e4b731ef14a45d38888b6";
  }

  static const char* value(const ::service_method::addRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xff8d7d66dd3e4b73ULL;
  static const uint64_t static_value2 = 0x1ef14a45d38888b6ULL;
};

template<class ContainerAllocator>
struct DataType< ::service_method::addRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "service_method/addRequest";
  }

  static const char* value(const ::service_method::addRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::service_method::addRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n"
"float32 y\n"
;
  }

  static const char* value(const ::service_method::addRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::service_method::addRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct addRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::service_method::addRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::service_method::addRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVICE_METHOD_MESSAGE_ADDREQUEST_H