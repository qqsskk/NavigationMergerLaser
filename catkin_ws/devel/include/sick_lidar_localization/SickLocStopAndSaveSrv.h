// Generated by gencpp from file sick_lidar_localization/SickLocStopAndSaveSrv.msg
// DO NOT EDIT!


#ifndef SICK_LIDAR_LOCALIZATION_MESSAGE_SICKLOCSTOPANDSAVESRV_H
#define SICK_LIDAR_LOCALIZATION_MESSAGE_SICKLOCSTOPANDSAVESRV_H

#include <ros/service_traits.h>


#include <sick_lidar_localization/SickLocStopAndSaveSrvRequest.h>
#include <sick_lidar_localization/SickLocStopAndSaveSrvResponse.h>


namespace sick_lidar_localization
{

struct SickLocStopAndSaveSrv
{

typedef SickLocStopAndSaveSrvRequest Request;
typedef SickLocStopAndSaveSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocStopAndSaveSrv
} // namespace sick_lidar_localization


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_lidar_localization::SickLocStopAndSaveSrv > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::sick_lidar_localization::SickLocStopAndSaveSrv&) { return value(); }
};

template<>
struct DataType< ::sick_lidar_localization::SickLocStopAndSaveSrv > {
  static const char* value()
  {
    return "sick_lidar_localization/SickLocStopAndSaveSrv";
  }

  static const char* value(const ::sick_lidar_localization::SickLocStopAndSaveSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_lidar_localization::SickLocStopAndSaveSrvRequest> should match
// service_traits::MD5Sum< ::sick_lidar_localization::SickLocStopAndSaveSrv >
template<>
struct MD5Sum< ::sick_lidar_localization::SickLocStopAndSaveSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_lidar_localization::SickLocStopAndSaveSrv >::value();
  }
  static const char* value(const ::sick_lidar_localization::SickLocStopAndSaveSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_lidar_localization::SickLocStopAndSaveSrvRequest> should match
// service_traits::DataType< ::sick_lidar_localization::SickLocStopAndSaveSrv >
template<>
struct DataType< ::sick_lidar_localization::SickLocStopAndSaveSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_lidar_localization::SickLocStopAndSaveSrv >::value();
  }
  static const char* value(const ::sick_lidar_localization::SickLocStopAndSaveSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_lidar_localization::SickLocStopAndSaveSrvResponse> should match
// service_traits::MD5Sum< ::sick_lidar_localization::SickLocStopAndSaveSrv >
template<>
struct MD5Sum< ::sick_lidar_localization::SickLocStopAndSaveSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_lidar_localization::SickLocStopAndSaveSrv >::value();
  }
  static const char* value(const ::sick_lidar_localization::SickLocStopAndSaveSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_lidar_localization::SickLocStopAndSaveSrvResponse> should match
// service_traits::DataType< ::sick_lidar_localization::SickLocStopAndSaveSrv >
template<>
struct DataType< ::sick_lidar_localization::SickLocStopAndSaveSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_lidar_localization::SickLocStopAndSaveSrv >::value();
  }
  static const char* value(const ::sick_lidar_localization::SickLocStopAndSaveSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SICK_LIDAR_LOCALIZATION_MESSAGE_SICKLOCSTOPANDSAVESRV_H