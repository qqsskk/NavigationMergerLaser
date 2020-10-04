// Generated by gencpp from file sick_lidar_localization/SickLocResultPortPayloadMsg.msg
// DO NOT EDIT!


#ifndef SICK_LIDAR_LOCALIZATION_MESSAGE_SICKLOCRESULTPORTPAYLOADMSG_H
#define SICK_LIDAR_LOCALIZATION_MESSAGE_SICKLOCRESULTPORTPAYLOADMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sick_lidar_localization
{
template <class ContainerAllocator>
struct SickLocResultPortPayloadMsg_
{
  typedef SickLocResultPortPayloadMsg_<ContainerAllocator> Type;

  SickLocResultPortPayloadMsg_()
    : ErrorCode(0)
    , ScanCounter(0)
    , Timestamp(0)
    , PoseX(0)
    , PoseY(0)
    , PoseYaw(0)
    , Reserved1(0)
    , Reserved2(0)
    , Quality(0)
    , OutliersRatio(0)
    , CovarianceX(0)
    , CovarianceY(0)
    , CovarianceYaw(0)
    , Reserved3(0)  {
    }
  SickLocResultPortPayloadMsg_(const ContainerAllocator& _alloc)
    : ErrorCode(0)
    , ScanCounter(0)
    , Timestamp(0)
    , PoseX(0)
    , PoseY(0)
    , PoseYaw(0)
    , Reserved1(0)
    , Reserved2(0)
    , Quality(0)
    , OutliersRatio(0)
    , CovarianceX(0)
    , CovarianceY(0)
    , CovarianceYaw(0)
    , Reserved3(0)  {
  (void)_alloc;
    }



   typedef uint16_t _ErrorCode_type;
  _ErrorCode_type ErrorCode;

   typedef uint32_t _ScanCounter_type;
  _ScanCounter_type ScanCounter;

   typedef uint32_t _Timestamp_type;
  _Timestamp_type Timestamp;

   typedef int32_t _PoseX_type;
  _PoseX_type PoseX;

   typedef int32_t _PoseY_type;
  _PoseY_type PoseY;

   typedef int32_t _PoseYaw_type;
  _PoseYaw_type PoseYaw;

   typedef uint32_t _Reserved1_type;
  _Reserved1_type Reserved1;

   typedef int32_t _Reserved2_type;
  _Reserved2_type Reserved2;

   typedef uint8_t _Quality_type;
  _Quality_type Quality;

   typedef uint8_t _OutliersRatio_type;
  _OutliersRatio_type OutliersRatio;

   typedef int32_t _CovarianceX_type;
  _CovarianceX_type CovarianceX;

   typedef int32_t _CovarianceY_type;
  _CovarianceY_type CovarianceY;

   typedef int32_t _CovarianceYaw_type;
  _CovarianceYaw_type CovarianceYaw;

   typedef uint64_t _Reserved3_type;
  _Reserved3_type Reserved3;





  typedef boost::shared_ptr< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocResultPortPayloadMsg_

typedef ::sick_lidar_localization::SickLocResultPortPayloadMsg_<std::allocator<void> > SickLocResultPortPayloadMsg;

typedef boost::shared_ptr< ::sick_lidar_localization::SickLocResultPortPayloadMsg > SickLocResultPortPayloadMsgPtr;
typedef boost::shared_ptr< ::sick_lidar_localization::SickLocResultPortPayloadMsg const> SickLocResultPortPayloadMsgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator1> & lhs, const ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator2> & rhs)
{
  return lhs.ErrorCode == rhs.ErrorCode &&
    lhs.ScanCounter == rhs.ScanCounter &&
    lhs.Timestamp == rhs.Timestamp &&
    lhs.PoseX == rhs.PoseX &&
    lhs.PoseY == rhs.PoseY &&
    lhs.PoseYaw == rhs.PoseYaw &&
    lhs.Reserved1 == rhs.Reserved1 &&
    lhs.Reserved2 == rhs.Reserved2 &&
    lhs.Quality == rhs.Quality &&
    lhs.OutliersRatio == rhs.OutliersRatio &&
    lhs.CovarianceX == rhs.CovarianceX &&
    lhs.CovarianceY == rhs.CovarianceY &&
    lhs.CovarianceYaw == rhs.CovarianceYaw &&
    lhs.Reserved3 == rhs.Reserved3;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator1> & lhs, const ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sick_lidar_localization

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dda37f4f942d644e9c72988be7984688";
  }

  static const char* value(const ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdda37f4f942d644eULL;
  static const uint64_t static_value2 = 0x9c72988be7984688ULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_lidar_localization/SickLocResultPortPayloadMsg";
  }

  static const char* value(const ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of ros message SickLocResultPortPayloadMsg.\n"
"# SickLocResultPortPayloadMsg publishes the payload of a result port telegram\n"
"# for sick localization (52 byte). See chapter 5.9 (\"About result port telegrams\")\n"
"# of the operation manual for further details.\n"
"\n"
"uint16 ErrorCode      # ErrorCode 0: OK, ErrorCode 1: UNKNOWNERROR. Size: UInt16 = 2 byte\n"
"uint32 ScanCounter    # Counter of related scan data. Size: UInt32 = 4 byte\n"
"uint32 Timestamp      # Time stamp of the pose [ms]. The time stamp indicates the time at which the pose is calculated. Size: UInt32 = 4 byte\n"
"int32  PoseX          # Position X of the vehicle on the map in cartesian global coordinates [mm]. Size: Int32 = 4 byte\n"
"int32  PoseY          # Position Y of the vehicle on the map in cartesian global coordinates [mm]. Size: Int32 = 4 byte\n"
"int32  PoseYaw        # Orientation (yaw) of the vehicle on the map [mdeg] Size: Int32 = 4 byte\n"
"uint32 Reserved1      # Reserved. Size: UInt32 = 4 byte\n"
"int32  Reserved2      # Reserved. Size: Int32 = 4 byte\n"
"uint8  Quality        # Quality of pose [0 … 100], 1 = bad pose quality, 100 = good pose quality. Size: UInt8 = 1 byte\n"
"uint8  OutliersRatio  # Ratio of beams that cannot be assigned to the current reference map [%]. Size: UInt8 = 1 byte\n"
"int32  CovarianceX    # Covariance c1 of the pose X [mm^2]. Size: Int32 = 4 byte\n"
"int32  CovarianceY    # Covariance c5 of the pose Y [mm^2]. Size: Int32 = 4 byte\n"
"int32  CovarianceYaw  # Covariance c9 of the pose Yaw [mdeg^2]. Size: Int32 = 4 byte\n"
"uint64 Reserved3      # Reserved. Size: UInt64 = 8 byte\n"
"\n"
;
  }

  static const char* value(const ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ErrorCode);
      stream.next(m.ScanCounter);
      stream.next(m.Timestamp);
      stream.next(m.PoseX);
      stream.next(m.PoseY);
      stream.next(m.PoseYaw);
      stream.next(m.Reserved1);
      stream.next(m.Reserved2);
      stream.next(m.Quality);
      stream.next(m.OutliersRatio);
      stream.next(m.CovarianceX);
      stream.next(m.CovarianceY);
      stream.next(m.CovarianceYaw);
      stream.next(m.Reserved3);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocResultPortPayloadMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sick_lidar_localization::SickLocResultPortPayloadMsg_<ContainerAllocator>& v)
  {
    s << indent << "ErrorCode: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.ErrorCode);
    s << indent << "ScanCounter: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.ScanCounter);
    s << indent << "Timestamp: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.Timestamp);
    s << indent << "PoseX: ";
    Printer<int32_t>::stream(s, indent + "  ", v.PoseX);
    s << indent << "PoseY: ";
    Printer<int32_t>::stream(s, indent + "  ", v.PoseY);
    s << indent << "PoseYaw: ";
    Printer<int32_t>::stream(s, indent + "  ", v.PoseYaw);
    s << indent << "Reserved1: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.Reserved1);
    s << indent << "Reserved2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Reserved2);
    s << indent << "Quality: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.Quality);
    s << indent << "OutliersRatio: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.OutliersRatio);
    s << indent << "CovarianceX: ";
    Printer<int32_t>::stream(s, indent + "  ", v.CovarianceX);
    s << indent << "CovarianceY: ";
    Printer<int32_t>::stream(s, indent + "  ", v.CovarianceY);
    s << indent << "CovarianceYaw: ";
    Printer<int32_t>::stream(s, indent + "  ", v.CovarianceYaw);
    s << indent << "Reserved3: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.Reserved3);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SICK_LIDAR_LOCALIZATION_MESSAGE_SICKLOCRESULTPORTPAYLOADMSG_H