// Generated by gencpp from file driver_blvd_controller/MLS_Measurement.msg
// DO NOT EDIT!


#ifndef DRIVER_BLVD_CONTROLLER_MESSAGE_MLS_MEASUREMENT_H
#define DRIVER_BLVD_CONTROLLER_MESSAGE_MLS_MEASUREMENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace driver_blvd_controller
{
template <class ContainerAllocator>
struct MLS_Measurement_
{
  typedef MLS_Measurement_<ContainerAllocator> Type;

  MLS_Measurement_()
    : header()
    , position()
    , lcp(0)
    , status(0)
    , error(0)  {
    }
  MLS_Measurement_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , position(_alloc)
    , lcp(0)
    , status(0)
    , error(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _position_type;
  _position_type position;

   typedef uint8_t _lcp_type;
  _lcp_type lcp;

   typedef uint8_t _status_type;
  _status_type status;

   typedef uint8_t _error_type;
  _error_type error;





  typedef boost::shared_ptr< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> const> ConstPtr;

}; // struct MLS_Measurement_

typedef ::driver_blvd_controller::MLS_Measurement_<std::allocator<void> > MLS_Measurement;

typedef boost::shared_ptr< ::driver_blvd_controller::MLS_Measurement > MLS_MeasurementPtr;
typedef boost::shared_ptr< ::driver_blvd_controller::MLS_Measurement const> MLS_MeasurementConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator1> & lhs, const ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.position == rhs.position &&
    lhs.lcp == rhs.lcp &&
    lhs.status == rhs.status &&
    lhs.error == rhs.error;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator1> & lhs, const ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace driver_blvd_controller

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "294c7b9c3028152b491bf17d4eb40177";
  }

  static const char* value(const ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x294c7b9c3028152bULL;
  static const uint64_t static_value2 = 0x491bf17d4eb40177ULL;
};

template<class ContainerAllocator>
struct DataType< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "driver_blvd_controller/MLS_Measurement";
  }

  static const char* value(const ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# MLS_Measurement.msg defines a single measurement of a SICK MLS.\n"
"# See operation instructions for details (www.sick.com/mls).\n"
"#\n"
"\n"
"# Header with sequence id, timestamp of the measurement and frame id \n"
"Header header\n"
"\n"
"# Array of measured positions for up to 3 lines.\n"
"# Each position is the distance to the center of a line (line center point) in meter.\n"
"# More than one line is detected in case of junctions.\n"
"float32[] position      # distance to the line center point [m]\n"
"\n"
"# LCP-flags (signs and line assignment)\n"
"uint8 lcp               # flags (signs and assignment, see chap. 8 of operation instructions)\n"
"\n"
"# Detection status\n"
"uint8 status            # status (see chap. 8 of operation instructions)\n"
"\n"
"# Error register\n"
"uint8 error             # error register (0x1001, value 0 = okay, see chap. 8 of operation instructions)\n"
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

  static const char* value(const ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.position);
      stream.next(m.lcp);
      stream.next(m.status);
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MLS_Measurement_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::driver_blvd_controller::MLS_Measurement_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "lcp: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.lcp);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "error: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DRIVER_BLVD_CONTROLLER_MESSAGE_MLS_MEASUREMENT_H