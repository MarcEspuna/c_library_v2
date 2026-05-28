#pragma once
// MESSAGE RTLS_DEVICE_STATUS PACKING

#define MAVLINK_MSG_ID_RTLS_DEVICE_STATUS 52000


typedef struct __mavlink_rtls_device_status_t {
 uint32_t time_boot_ms; /*< [ms] Timestamp since boot.*/
 uint32_t flags; /*<  Status flags.*/
 int32_t dynamic_anchor_x_mm[4]; /*< [mm] Dynamic anchor X positions.*/
 int32_t dynamic_anchor_y_mm[4]; /*< [mm] Dynamic anchor Y positions.*/
 int32_t dynamic_anchor_z_mm[4]; /*< [mm] Dynamic anchor Z positions.*/
 uint16_t avg_rate_chz; /*< [cHz] Average position update rate.*/
 uint16_t min_rate_chz; /*< [cHz] Minimum position update rate.*/
 uint16_t max_rate_chz; /*< [cHz] Maximum position update rate.*/
 uint16_t log_udp_port; /*<  UDP log port.*/
 uint8_t role; /*<  RTLS role.*/
 uint8_t anchors_seen; /*<  Visible anchor count.*/
 uint8_t mavlink_target_system; /*<  Configured ArduPilot target system id.*/
 uint8_t log_level; /*<  Compiled log level.*/
 uint8_t dynamic_anchor_count; /*<  Number of valid dynamic anchor entries.*/
 uint8_t dynamic_anchor_id[4]; /*<  Dynamic anchor IDs.*/
 uint8_t ip[4]; /*<  Device IPv4 address.*/
 uint8_t mac[6]; /*<  WiFi MAC address.*/
 char device_type[16]; /*<  Device type string.*/
 char short_addr[8]; /*<  UWB short address string.*/
 char firmware_version[16]; /*<  Firmware version string.*/
} mavlink_rtls_device_status_t;

#define MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN 123
#define MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_MIN_LEN 123
#define MAVLINK_MSG_ID_52000_LEN 123
#define MAVLINK_MSG_ID_52000_MIN_LEN 123

#define MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_CRC 59
#define MAVLINK_MSG_ID_52000_CRC 59

#define MAVLINK_MSG_RTLS_DEVICE_STATUS_FIELD_DYNAMIC_ANCHOR_X_MM_LEN 4
#define MAVLINK_MSG_RTLS_DEVICE_STATUS_FIELD_DYNAMIC_ANCHOR_Y_MM_LEN 4
#define MAVLINK_MSG_RTLS_DEVICE_STATUS_FIELD_DYNAMIC_ANCHOR_Z_MM_LEN 4
#define MAVLINK_MSG_RTLS_DEVICE_STATUS_FIELD_DYNAMIC_ANCHOR_ID_LEN 4
#define MAVLINK_MSG_RTLS_DEVICE_STATUS_FIELD_IP_LEN 4
#define MAVLINK_MSG_RTLS_DEVICE_STATUS_FIELD_MAC_LEN 6
#define MAVLINK_MSG_RTLS_DEVICE_STATUS_FIELD_DEVICE_TYPE_LEN 16
#define MAVLINK_MSG_RTLS_DEVICE_STATUS_FIELD_SHORT_ADDR_LEN 8
#define MAVLINK_MSG_RTLS_DEVICE_STATUS_FIELD_FIRMWARE_VERSION_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RTLS_DEVICE_STATUS { \
    52000, \
    "RTLS_DEVICE_STATUS", \
    20, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_rtls_device_status_t, time_boot_ms) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_rtls_device_status_t, flags) }, \
         { "avg_rate_chz", NULL, MAVLINK_TYPE_UINT16_T, 0, 56, offsetof(mavlink_rtls_device_status_t, avg_rate_chz) }, \
         { "min_rate_chz", NULL, MAVLINK_TYPE_UINT16_T, 0, 58, offsetof(mavlink_rtls_device_status_t, min_rate_chz) }, \
         { "max_rate_chz", NULL, MAVLINK_TYPE_UINT16_T, 0, 60, offsetof(mavlink_rtls_device_status_t, max_rate_chz) }, \
         { "log_udp_port", NULL, MAVLINK_TYPE_UINT16_T, 0, 62, offsetof(mavlink_rtls_device_status_t, log_udp_port) }, \
         { "role", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_rtls_device_status_t, role) }, \
         { "anchors_seen", NULL, MAVLINK_TYPE_UINT8_T, 0, 65, offsetof(mavlink_rtls_device_status_t, anchors_seen) }, \
         { "mavlink_target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_rtls_device_status_t, mavlink_target_system) }, \
         { "log_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 67, offsetof(mavlink_rtls_device_status_t, log_level) }, \
         { "dynamic_anchor_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 68, offsetof(mavlink_rtls_device_status_t, dynamic_anchor_count) }, \
         { "dynamic_anchor_id", NULL, MAVLINK_TYPE_UINT8_T, 4, 69, offsetof(mavlink_rtls_device_status_t, dynamic_anchor_id) }, \
         { "dynamic_anchor_x_mm", NULL, MAVLINK_TYPE_INT32_T, 4, 8, offsetof(mavlink_rtls_device_status_t, dynamic_anchor_x_mm) }, \
         { "dynamic_anchor_y_mm", NULL, MAVLINK_TYPE_INT32_T, 4, 24, offsetof(mavlink_rtls_device_status_t, dynamic_anchor_y_mm) }, \
         { "dynamic_anchor_z_mm", NULL, MAVLINK_TYPE_INT32_T, 4, 40, offsetof(mavlink_rtls_device_status_t, dynamic_anchor_z_mm) }, \
         { "ip", NULL, MAVLINK_TYPE_UINT8_T, 4, 73, offsetof(mavlink_rtls_device_status_t, ip) }, \
         { "mac", NULL, MAVLINK_TYPE_UINT8_T, 6, 77, offsetof(mavlink_rtls_device_status_t, mac) }, \
         { "device_type", NULL, MAVLINK_TYPE_CHAR, 16, 83, offsetof(mavlink_rtls_device_status_t, device_type) }, \
         { "short_addr", NULL, MAVLINK_TYPE_CHAR, 8, 99, offsetof(mavlink_rtls_device_status_t, short_addr) }, \
         { "firmware_version", NULL, MAVLINK_TYPE_CHAR, 16, 107, offsetof(mavlink_rtls_device_status_t, firmware_version) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RTLS_DEVICE_STATUS { \
    "RTLS_DEVICE_STATUS", \
    20, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_rtls_device_status_t, time_boot_ms) }, \
         { "flags", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_rtls_device_status_t, flags) }, \
         { "avg_rate_chz", NULL, MAVLINK_TYPE_UINT16_T, 0, 56, offsetof(mavlink_rtls_device_status_t, avg_rate_chz) }, \
         { "min_rate_chz", NULL, MAVLINK_TYPE_UINT16_T, 0, 58, offsetof(mavlink_rtls_device_status_t, min_rate_chz) }, \
         { "max_rate_chz", NULL, MAVLINK_TYPE_UINT16_T, 0, 60, offsetof(mavlink_rtls_device_status_t, max_rate_chz) }, \
         { "log_udp_port", NULL, MAVLINK_TYPE_UINT16_T, 0, 62, offsetof(mavlink_rtls_device_status_t, log_udp_port) }, \
         { "role", NULL, MAVLINK_TYPE_UINT8_T, 0, 64, offsetof(mavlink_rtls_device_status_t, role) }, \
         { "anchors_seen", NULL, MAVLINK_TYPE_UINT8_T, 0, 65, offsetof(mavlink_rtls_device_status_t, anchors_seen) }, \
         { "mavlink_target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 66, offsetof(mavlink_rtls_device_status_t, mavlink_target_system) }, \
         { "log_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 67, offsetof(mavlink_rtls_device_status_t, log_level) }, \
         { "dynamic_anchor_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 68, offsetof(mavlink_rtls_device_status_t, dynamic_anchor_count) }, \
         { "dynamic_anchor_id", NULL, MAVLINK_TYPE_UINT8_T, 4, 69, offsetof(mavlink_rtls_device_status_t, dynamic_anchor_id) }, \
         { "dynamic_anchor_x_mm", NULL, MAVLINK_TYPE_INT32_T, 4, 8, offsetof(mavlink_rtls_device_status_t, dynamic_anchor_x_mm) }, \
         { "dynamic_anchor_y_mm", NULL, MAVLINK_TYPE_INT32_T, 4, 24, offsetof(mavlink_rtls_device_status_t, dynamic_anchor_y_mm) }, \
         { "dynamic_anchor_z_mm", NULL, MAVLINK_TYPE_INT32_T, 4, 40, offsetof(mavlink_rtls_device_status_t, dynamic_anchor_z_mm) }, \
         { "ip", NULL, MAVLINK_TYPE_UINT8_T, 4, 73, offsetof(mavlink_rtls_device_status_t, ip) }, \
         { "mac", NULL, MAVLINK_TYPE_UINT8_T, 6, 77, offsetof(mavlink_rtls_device_status_t, mac) }, \
         { "device_type", NULL, MAVLINK_TYPE_CHAR, 16, 83, offsetof(mavlink_rtls_device_status_t, device_type) }, \
         { "short_addr", NULL, MAVLINK_TYPE_CHAR, 8, 99, offsetof(mavlink_rtls_device_status_t, short_addr) }, \
         { "firmware_version", NULL, MAVLINK_TYPE_CHAR, 16, 107, offsetof(mavlink_rtls_device_status_t, firmware_version) }, \
         } \
}
#endif

/**
 * @brief Pack a rtls_device_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp since boot.
 * @param flags  Status flags.
 * @param avg_rate_chz [cHz] Average position update rate.
 * @param min_rate_chz [cHz] Minimum position update rate.
 * @param max_rate_chz [cHz] Maximum position update rate.
 * @param log_udp_port  UDP log port.
 * @param role  RTLS role.
 * @param anchors_seen  Visible anchor count.
 * @param mavlink_target_system  Configured ArduPilot target system id.
 * @param log_level  Compiled log level.
 * @param dynamic_anchor_count  Number of valid dynamic anchor entries.
 * @param dynamic_anchor_id  Dynamic anchor IDs.
 * @param dynamic_anchor_x_mm [mm] Dynamic anchor X positions.
 * @param dynamic_anchor_y_mm [mm] Dynamic anchor Y positions.
 * @param dynamic_anchor_z_mm [mm] Dynamic anchor Z positions.
 * @param ip  Device IPv4 address.
 * @param mac  WiFi MAC address.
 * @param device_type  Device type string.
 * @param short_addr  UWB short address string.
 * @param firmware_version  Firmware version string.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtls_device_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint32_t flags, uint16_t avg_rate_chz, uint16_t min_rate_chz, uint16_t max_rate_chz, uint16_t log_udp_port, uint8_t role, uint8_t anchors_seen, uint8_t mavlink_target_system, uint8_t log_level, uint8_t dynamic_anchor_count, const uint8_t *dynamic_anchor_id, const int32_t *dynamic_anchor_x_mm, const int32_t *dynamic_anchor_y_mm, const int32_t *dynamic_anchor_z_mm, const uint8_t *ip, const uint8_t *mac, const char *device_type, const char *short_addr, const char *firmware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, flags);
    _mav_put_uint16_t(buf, 56, avg_rate_chz);
    _mav_put_uint16_t(buf, 58, min_rate_chz);
    _mav_put_uint16_t(buf, 60, max_rate_chz);
    _mav_put_uint16_t(buf, 62, log_udp_port);
    _mav_put_uint8_t(buf, 64, role);
    _mav_put_uint8_t(buf, 65, anchors_seen);
    _mav_put_uint8_t(buf, 66, mavlink_target_system);
    _mav_put_uint8_t(buf, 67, log_level);
    _mav_put_uint8_t(buf, 68, dynamic_anchor_count);
    _mav_put_int32_t_array(buf, 8, dynamic_anchor_x_mm, 4);
    _mav_put_int32_t_array(buf, 24, dynamic_anchor_y_mm, 4);
    _mav_put_int32_t_array(buf, 40, dynamic_anchor_z_mm, 4);
    _mav_put_uint8_t_array(buf, 69, dynamic_anchor_id, 4);
    _mav_put_uint8_t_array(buf, 73, ip, 4);
    _mav_put_uint8_t_array(buf, 77, mac, 6);
    _mav_put_char_array(buf, 83, device_type, 16);
    _mav_put_char_array(buf, 99, short_addr, 8);
    _mav_put_char_array(buf, 107, firmware_version, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN);
#else
    mavlink_rtls_device_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.flags = flags;
    packet.avg_rate_chz = avg_rate_chz;
    packet.min_rate_chz = min_rate_chz;
    packet.max_rate_chz = max_rate_chz;
    packet.log_udp_port = log_udp_port;
    packet.role = role;
    packet.anchors_seen = anchors_seen;
    packet.mavlink_target_system = mavlink_target_system;
    packet.log_level = log_level;
    packet.dynamic_anchor_count = dynamic_anchor_count;
    mav_array_memcpy(packet.dynamic_anchor_x_mm, dynamic_anchor_x_mm, 4);
    mav_array_memcpy(packet.dynamic_anchor_y_mm, dynamic_anchor_y_mm, 4);
    mav_array_memcpy(packet.dynamic_anchor_z_mm, dynamic_anchor_z_mm, 4);
    mav_array_memcpy(packet.dynamic_anchor_id, dynamic_anchor_id, 4);
    mav_array_memcpy(packet.ip, ip, 4);
    mav_array_memcpy(packet.mac, mac, 6);
    mav_array_memcpy(packet.device_type, device_type, 16);
    mav_array_memcpy(packet.short_addr, short_addr, 8);
    mav_array_memcpy(packet.firmware_version, firmware_version, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTLS_DEVICE_STATUS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_CRC);
}

/**
 * @brief Pack a rtls_device_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms [ms] Timestamp since boot.
 * @param flags  Status flags.
 * @param avg_rate_chz [cHz] Average position update rate.
 * @param min_rate_chz [cHz] Minimum position update rate.
 * @param max_rate_chz [cHz] Maximum position update rate.
 * @param log_udp_port  UDP log port.
 * @param role  RTLS role.
 * @param anchors_seen  Visible anchor count.
 * @param mavlink_target_system  Configured ArduPilot target system id.
 * @param log_level  Compiled log level.
 * @param dynamic_anchor_count  Number of valid dynamic anchor entries.
 * @param dynamic_anchor_id  Dynamic anchor IDs.
 * @param dynamic_anchor_x_mm [mm] Dynamic anchor X positions.
 * @param dynamic_anchor_y_mm [mm] Dynamic anchor Y positions.
 * @param dynamic_anchor_z_mm [mm] Dynamic anchor Z positions.
 * @param ip  Device IPv4 address.
 * @param mac  WiFi MAC address.
 * @param device_type  Device type string.
 * @param short_addr  UWB short address string.
 * @param firmware_version  Firmware version string.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtls_device_status_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t time_boot_ms, uint32_t flags, uint16_t avg_rate_chz, uint16_t min_rate_chz, uint16_t max_rate_chz, uint16_t log_udp_port, uint8_t role, uint8_t anchors_seen, uint8_t mavlink_target_system, uint8_t log_level, uint8_t dynamic_anchor_count, const uint8_t *dynamic_anchor_id, const int32_t *dynamic_anchor_x_mm, const int32_t *dynamic_anchor_y_mm, const int32_t *dynamic_anchor_z_mm, const uint8_t *ip, const uint8_t *mac, const char *device_type, const char *short_addr, const char *firmware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, flags);
    _mav_put_uint16_t(buf, 56, avg_rate_chz);
    _mav_put_uint16_t(buf, 58, min_rate_chz);
    _mav_put_uint16_t(buf, 60, max_rate_chz);
    _mav_put_uint16_t(buf, 62, log_udp_port);
    _mav_put_uint8_t(buf, 64, role);
    _mav_put_uint8_t(buf, 65, anchors_seen);
    _mav_put_uint8_t(buf, 66, mavlink_target_system);
    _mav_put_uint8_t(buf, 67, log_level);
    _mav_put_uint8_t(buf, 68, dynamic_anchor_count);
    _mav_put_int32_t_array(buf, 8, dynamic_anchor_x_mm, 4);
    _mav_put_int32_t_array(buf, 24, dynamic_anchor_y_mm, 4);
    _mav_put_int32_t_array(buf, 40, dynamic_anchor_z_mm, 4);
    _mav_put_uint8_t_array(buf, 69, dynamic_anchor_id, 4);
    _mav_put_uint8_t_array(buf, 73, ip, 4);
    _mav_put_uint8_t_array(buf, 77, mac, 6);
    _mav_put_char_array(buf, 83, device_type, 16);
    _mav_put_char_array(buf, 99, short_addr, 8);
    _mav_put_char_array(buf, 107, firmware_version, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN);
#else
    mavlink_rtls_device_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.flags = flags;
    packet.avg_rate_chz = avg_rate_chz;
    packet.min_rate_chz = min_rate_chz;
    packet.max_rate_chz = max_rate_chz;
    packet.log_udp_port = log_udp_port;
    packet.role = role;
    packet.anchors_seen = anchors_seen;
    packet.mavlink_target_system = mavlink_target_system;
    packet.log_level = log_level;
    packet.dynamic_anchor_count = dynamic_anchor_count;
    mav_array_memcpy(packet.dynamic_anchor_x_mm, dynamic_anchor_x_mm, sizeof(int32_t)*4);
    mav_array_memcpy(packet.dynamic_anchor_y_mm, dynamic_anchor_y_mm, sizeof(int32_t)*4);
    mav_array_memcpy(packet.dynamic_anchor_z_mm, dynamic_anchor_z_mm, sizeof(int32_t)*4);
    mav_array_memcpy(packet.dynamic_anchor_id, dynamic_anchor_id, sizeof(uint8_t)*4);
    mav_array_memcpy(packet.ip, ip, sizeof(uint8_t)*4);
    mav_array_memcpy(packet.mac, mac, sizeof(uint8_t)*6);
    mav_array_memcpy(packet.device_type, device_type, sizeof(char)*16);
    mav_array_memcpy(packet.short_addr, short_addr, sizeof(char)*8);
    mav_array_memcpy(packet.firmware_version, firmware_version, sizeof(char)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTLS_DEVICE_STATUS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN);
#endif
}

/**
 * @brief Pack a rtls_device_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms [ms] Timestamp since boot.
 * @param flags  Status flags.
 * @param avg_rate_chz [cHz] Average position update rate.
 * @param min_rate_chz [cHz] Minimum position update rate.
 * @param max_rate_chz [cHz] Maximum position update rate.
 * @param log_udp_port  UDP log port.
 * @param role  RTLS role.
 * @param anchors_seen  Visible anchor count.
 * @param mavlink_target_system  Configured ArduPilot target system id.
 * @param log_level  Compiled log level.
 * @param dynamic_anchor_count  Number of valid dynamic anchor entries.
 * @param dynamic_anchor_id  Dynamic anchor IDs.
 * @param dynamic_anchor_x_mm [mm] Dynamic anchor X positions.
 * @param dynamic_anchor_y_mm [mm] Dynamic anchor Y positions.
 * @param dynamic_anchor_z_mm [mm] Dynamic anchor Z positions.
 * @param ip  Device IPv4 address.
 * @param mac  WiFi MAC address.
 * @param device_type  Device type string.
 * @param short_addr  UWB short address string.
 * @param firmware_version  Firmware version string.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtls_device_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,uint32_t flags,uint16_t avg_rate_chz,uint16_t min_rate_chz,uint16_t max_rate_chz,uint16_t log_udp_port,uint8_t role,uint8_t anchors_seen,uint8_t mavlink_target_system,uint8_t log_level,uint8_t dynamic_anchor_count,const uint8_t *dynamic_anchor_id,const int32_t *dynamic_anchor_x_mm,const int32_t *dynamic_anchor_y_mm,const int32_t *dynamic_anchor_z_mm,const uint8_t *ip,const uint8_t *mac,const char *device_type,const char *short_addr,const char *firmware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, flags);
    _mav_put_uint16_t(buf, 56, avg_rate_chz);
    _mav_put_uint16_t(buf, 58, min_rate_chz);
    _mav_put_uint16_t(buf, 60, max_rate_chz);
    _mav_put_uint16_t(buf, 62, log_udp_port);
    _mav_put_uint8_t(buf, 64, role);
    _mav_put_uint8_t(buf, 65, anchors_seen);
    _mav_put_uint8_t(buf, 66, mavlink_target_system);
    _mav_put_uint8_t(buf, 67, log_level);
    _mav_put_uint8_t(buf, 68, dynamic_anchor_count);
    _mav_put_int32_t_array(buf, 8, dynamic_anchor_x_mm, 4);
    _mav_put_int32_t_array(buf, 24, dynamic_anchor_y_mm, 4);
    _mav_put_int32_t_array(buf, 40, dynamic_anchor_z_mm, 4);
    _mav_put_uint8_t_array(buf, 69, dynamic_anchor_id, 4);
    _mav_put_uint8_t_array(buf, 73, ip, 4);
    _mav_put_uint8_t_array(buf, 77, mac, 6);
    _mav_put_char_array(buf, 83, device_type, 16);
    _mav_put_char_array(buf, 99, short_addr, 8);
    _mav_put_char_array(buf, 107, firmware_version, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN);
#else
    mavlink_rtls_device_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.flags = flags;
    packet.avg_rate_chz = avg_rate_chz;
    packet.min_rate_chz = min_rate_chz;
    packet.max_rate_chz = max_rate_chz;
    packet.log_udp_port = log_udp_port;
    packet.role = role;
    packet.anchors_seen = anchors_seen;
    packet.mavlink_target_system = mavlink_target_system;
    packet.log_level = log_level;
    packet.dynamic_anchor_count = dynamic_anchor_count;
    mav_array_memcpy(packet.dynamic_anchor_x_mm, dynamic_anchor_x_mm, 4);
    mav_array_memcpy(packet.dynamic_anchor_y_mm, dynamic_anchor_y_mm, 4);
    mav_array_memcpy(packet.dynamic_anchor_z_mm, dynamic_anchor_z_mm, 4);
    mav_array_memcpy(packet.dynamic_anchor_id, dynamic_anchor_id, 4);
    mav_array_memcpy(packet.ip, ip, 4);
    mav_array_memcpy(packet.mac, mac, 6);
    mav_array_memcpy(packet.device_type, device_type, 16);
    mav_array_memcpy(packet.short_addr, short_addr, 8);
    mav_array_memcpy(packet.firmware_version, firmware_version, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTLS_DEVICE_STATUS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_CRC);
}

/**
 * @brief Encode a rtls_device_status struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rtls_device_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtls_device_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rtls_device_status_t* rtls_device_status)
{
    return mavlink_msg_rtls_device_status_pack(system_id, component_id, msg, rtls_device_status->time_boot_ms, rtls_device_status->flags, rtls_device_status->avg_rate_chz, rtls_device_status->min_rate_chz, rtls_device_status->max_rate_chz, rtls_device_status->log_udp_port, rtls_device_status->role, rtls_device_status->anchors_seen, rtls_device_status->mavlink_target_system, rtls_device_status->log_level, rtls_device_status->dynamic_anchor_count, rtls_device_status->dynamic_anchor_id, rtls_device_status->dynamic_anchor_x_mm, rtls_device_status->dynamic_anchor_y_mm, rtls_device_status->dynamic_anchor_z_mm, rtls_device_status->ip, rtls_device_status->mac, rtls_device_status->device_type, rtls_device_status->short_addr, rtls_device_status->firmware_version);
}

/**
 * @brief Encode a rtls_device_status struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rtls_device_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtls_device_status_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rtls_device_status_t* rtls_device_status)
{
    return mavlink_msg_rtls_device_status_pack_chan(system_id, component_id, chan, msg, rtls_device_status->time_boot_ms, rtls_device_status->flags, rtls_device_status->avg_rate_chz, rtls_device_status->min_rate_chz, rtls_device_status->max_rate_chz, rtls_device_status->log_udp_port, rtls_device_status->role, rtls_device_status->anchors_seen, rtls_device_status->mavlink_target_system, rtls_device_status->log_level, rtls_device_status->dynamic_anchor_count, rtls_device_status->dynamic_anchor_id, rtls_device_status->dynamic_anchor_x_mm, rtls_device_status->dynamic_anchor_y_mm, rtls_device_status->dynamic_anchor_z_mm, rtls_device_status->ip, rtls_device_status->mac, rtls_device_status->device_type, rtls_device_status->short_addr, rtls_device_status->firmware_version);
}

/**
 * @brief Encode a rtls_device_status struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param rtls_device_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtls_device_status_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_rtls_device_status_t* rtls_device_status)
{
    return mavlink_msg_rtls_device_status_pack_status(system_id, component_id, _status, msg,  rtls_device_status->time_boot_ms, rtls_device_status->flags, rtls_device_status->avg_rate_chz, rtls_device_status->min_rate_chz, rtls_device_status->max_rate_chz, rtls_device_status->log_udp_port, rtls_device_status->role, rtls_device_status->anchors_seen, rtls_device_status->mavlink_target_system, rtls_device_status->log_level, rtls_device_status->dynamic_anchor_count, rtls_device_status->dynamic_anchor_id, rtls_device_status->dynamic_anchor_x_mm, rtls_device_status->dynamic_anchor_y_mm, rtls_device_status->dynamic_anchor_z_mm, rtls_device_status->ip, rtls_device_status->mac, rtls_device_status->device_type, rtls_device_status->short_addr, rtls_device_status->firmware_version);
}

/**
 * @brief Send a rtls_device_status message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms [ms] Timestamp since boot.
 * @param flags  Status flags.
 * @param avg_rate_chz [cHz] Average position update rate.
 * @param min_rate_chz [cHz] Minimum position update rate.
 * @param max_rate_chz [cHz] Maximum position update rate.
 * @param log_udp_port  UDP log port.
 * @param role  RTLS role.
 * @param anchors_seen  Visible anchor count.
 * @param mavlink_target_system  Configured ArduPilot target system id.
 * @param log_level  Compiled log level.
 * @param dynamic_anchor_count  Number of valid dynamic anchor entries.
 * @param dynamic_anchor_id  Dynamic anchor IDs.
 * @param dynamic_anchor_x_mm [mm] Dynamic anchor X positions.
 * @param dynamic_anchor_y_mm [mm] Dynamic anchor Y positions.
 * @param dynamic_anchor_z_mm [mm] Dynamic anchor Z positions.
 * @param ip  Device IPv4 address.
 * @param mac  WiFi MAC address.
 * @param device_type  Device type string.
 * @param short_addr  UWB short address string.
 * @param firmware_version  Firmware version string.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rtls_device_status_send(mavlink_channel_t chan, uint32_t time_boot_ms, uint32_t flags, uint16_t avg_rate_chz, uint16_t min_rate_chz, uint16_t max_rate_chz, uint16_t log_udp_port, uint8_t role, uint8_t anchors_seen, uint8_t mavlink_target_system, uint8_t log_level, uint8_t dynamic_anchor_count, const uint8_t *dynamic_anchor_id, const int32_t *dynamic_anchor_x_mm, const int32_t *dynamic_anchor_y_mm, const int32_t *dynamic_anchor_z_mm, const uint8_t *ip, const uint8_t *mac, const char *device_type, const char *short_addr, const char *firmware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, flags);
    _mav_put_uint16_t(buf, 56, avg_rate_chz);
    _mav_put_uint16_t(buf, 58, min_rate_chz);
    _mav_put_uint16_t(buf, 60, max_rate_chz);
    _mav_put_uint16_t(buf, 62, log_udp_port);
    _mav_put_uint8_t(buf, 64, role);
    _mav_put_uint8_t(buf, 65, anchors_seen);
    _mav_put_uint8_t(buf, 66, mavlink_target_system);
    _mav_put_uint8_t(buf, 67, log_level);
    _mav_put_uint8_t(buf, 68, dynamic_anchor_count);
    _mav_put_int32_t_array(buf, 8, dynamic_anchor_x_mm, 4);
    _mav_put_int32_t_array(buf, 24, dynamic_anchor_y_mm, 4);
    _mav_put_int32_t_array(buf, 40, dynamic_anchor_z_mm, 4);
    _mav_put_uint8_t_array(buf, 69, dynamic_anchor_id, 4);
    _mav_put_uint8_t_array(buf, 73, ip, 4);
    _mav_put_uint8_t_array(buf, 77, mac, 6);
    _mav_put_char_array(buf, 83, device_type, 16);
    _mav_put_char_array(buf, 99, short_addr, 8);
    _mav_put_char_array(buf, 107, firmware_version, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS, buf, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_CRC);
#else
    mavlink_rtls_device_status_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.flags = flags;
    packet.avg_rate_chz = avg_rate_chz;
    packet.min_rate_chz = min_rate_chz;
    packet.max_rate_chz = max_rate_chz;
    packet.log_udp_port = log_udp_port;
    packet.role = role;
    packet.anchors_seen = anchors_seen;
    packet.mavlink_target_system = mavlink_target_system;
    packet.log_level = log_level;
    packet.dynamic_anchor_count = dynamic_anchor_count;
    mav_array_memcpy(packet.dynamic_anchor_x_mm, dynamic_anchor_x_mm, 4);
    mav_array_memcpy(packet.dynamic_anchor_y_mm, dynamic_anchor_y_mm, 4);
    mav_array_memcpy(packet.dynamic_anchor_z_mm, dynamic_anchor_z_mm, 4);
    mav_array_memcpy(packet.dynamic_anchor_id, dynamic_anchor_id, 4);
    mav_array_memcpy(packet.ip, ip, 4);
    mav_array_memcpy(packet.mac, mac, 6);
    mav_array_memcpy(packet.device_type, device_type, 16);
    mav_array_memcpy(packet.short_addr, short_addr, 8);
    mav_array_memcpy(packet.firmware_version, firmware_version, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS, (const char *)&packet, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_CRC);
#endif
}

/**
 * @brief Send a rtls_device_status message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rtls_device_status_send_struct(mavlink_channel_t chan, const mavlink_rtls_device_status_t* rtls_device_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rtls_device_status_send(chan, rtls_device_status->time_boot_ms, rtls_device_status->flags, rtls_device_status->avg_rate_chz, rtls_device_status->min_rate_chz, rtls_device_status->max_rate_chz, rtls_device_status->log_udp_port, rtls_device_status->role, rtls_device_status->anchors_seen, rtls_device_status->mavlink_target_system, rtls_device_status->log_level, rtls_device_status->dynamic_anchor_count, rtls_device_status->dynamic_anchor_id, rtls_device_status->dynamic_anchor_x_mm, rtls_device_status->dynamic_anchor_y_mm, rtls_device_status->dynamic_anchor_z_mm, rtls_device_status->ip, rtls_device_status->mac, rtls_device_status->device_type, rtls_device_status->short_addr, rtls_device_status->firmware_version);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS, (const char *)rtls_device_status, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_CRC);
#endif
}

#if MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rtls_device_status_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, uint32_t flags, uint16_t avg_rate_chz, uint16_t min_rate_chz, uint16_t max_rate_chz, uint16_t log_udp_port, uint8_t role, uint8_t anchors_seen, uint8_t mavlink_target_system, uint8_t log_level, uint8_t dynamic_anchor_count, const uint8_t *dynamic_anchor_id, const int32_t *dynamic_anchor_x_mm, const int32_t *dynamic_anchor_y_mm, const int32_t *dynamic_anchor_z_mm, const uint8_t *ip, const uint8_t *mac, const char *device_type, const char *short_addr, const char *firmware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_uint32_t(buf, 4, flags);
    _mav_put_uint16_t(buf, 56, avg_rate_chz);
    _mav_put_uint16_t(buf, 58, min_rate_chz);
    _mav_put_uint16_t(buf, 60, max_rate_chz);
    _mav_put_uint16_t(buf, 62, log_udp_port);
    _mav_put_uint8_t(buf, 64, role);
    _mav_put_uint8_t(buf, 65, anchors_seen);
    _mav_put_uint8_t(buf, 66, mavlink_target_system);
    _mav_put_uint8_t(buf, 67, log_level);
    _mav_put_uint8_t(buf, 68, dynamic_anchor_count);
    _mav_put_int32_t_array(buf, 8, dynamic_anchor_x_mm, 4);
    _mav_put_int32_t_array(buf, 24, dynamic_anchor_y_mm, 4);
    _mav_put_int32_t_array(buf, 40, dynamic_anchor_z_mm, 4);
    _mav_put_uint8_t_array(buf, 69, dynamic_anchor_id, 4);
    _mav_put_uint8_t_array(buf, 73, ip, 4);
    _mav_put_uint8_t_array(buf, 77, mac, 6);
    _mav_put_char_array(buf, 83, device_type, 16);
    _mav_put_char_array(buf, 99, short_addr, 8);
    _mav_put_char_array(buf, 107, firmware_version, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS, buf, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_CRC);
#else
    mavlink_rtls_device_status_t *packet = (mavlink_rtls_device_status_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->flags = flags;
    packet->avg_rate_chz = avg_rate_chz;
    packet->min_rate_chz = min_rate_chz;
    packet->max_rate_chz = max_rate_chz;
    packet->log_udp_port = log_udp_port;
    packet->role = role;
    packet->anchors_seen = anchors_seen;
    packet->mavlink_target_system = mavlink_target_system;
    packet->log_level = log_level;
    packet->dynamic_anchor_count = dynamic_anchor_count;
    mav_array_memcpy(packet->dynamic_anchor_x_mm, dynamic_anchor_x_mm, 4);
    mav_array_memcpy(packet->dynamic_anchor_y_mm, dynamic_anchor_y_mm, 4);
    mav_array_memcpy(packet->dynamic_anchor_z_mm, dynamic_anchor_z_mm, 4);
    mav_array_memcpy(packet->dynamic_anchor_id, dynamic_anchor_id, 4);
    mav_array_memcpy(packet->ip, ip, 4);
    mav_array_memcpy(packet->mac, mac, 6);
    mav_array_memcpy(packet->device_type, device_type, 16);
    mav_array_memcpy(packet->short_addr, short_addr, 8);
    mav_array_memcpy(packet->firmware_version, firmware_version, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS, (const char *)packet, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_MIN_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_CRC);
#endif
}
#endif

#endif

// MESSAGE RTLS_DEVICE_STATUS UNPACKING


/**
 * @brief Get field time_boot_ms from rtls_device_status message
 *
 * @return [ms] Timestamp since boot.
 */
static inline uint32_t mavlink_msg_rtls_device_status_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field flags from rtls_device_status message
 *
 * @return  Status flags.
 */
static inline uint32_t mavlink_msg_rtls_device_status_get_flags(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field avg_rate_chz from rtls_device_status message
 *
 * @return [cHz] Average position update rate.
 */
static inline uint16_t mavlink_msg_rtls_device_status_get_avg_rate_chz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  56);
}

/**
 * @brief Get field min_rate_chz from rtls_device_status message
 *
 * @return [cHz] Minimum position update rate.
 */
static inline uint16_t mavlink_msg_rtls_device_status_get_min_rate_chz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  58);
}

/**
 * @brief Get field max_rate_chz from rtls_device_status message
 *
 * @return [cHz] Maximum position update rate.
 */
static inline uint16_t mavlink_msg_rtls_device_status_get_max_rate_chz(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  60);
}

/**
 * @brief Get field log_udp_port from rtls_device_status message
 *
 * @return  UDP log port.
 */
static inline uint16_t mavlink_msg_rtls_device_status_get_log_udp_port(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  62);
}

/**
 * @brief Get field role from rtls_device_status message
 *
 * @return  RTLS role.
 */
static inline uint8_t mavlink_msg_rtls_device_status_get_role(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  64);
}

/**
 * @brief Get field anchors_seen from rtls_device_status message
 *
 * @return  Visible anchor count.
 */
static inline uint8_t mavlink_msg_rtls_device_status_get_anchors_seen(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  65);
}

/**
 * @brief Get field mavlink_target_system from rtls_device_status message
 *
 * @return  Configured ArduPilot target system id.
 */
static inline uint8_t mavlink_msg_rtls_device_status_get_mavlink_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  66);
}

/**
 * @brief Get field log_level from rtls_device_status message
 *
 * @return  Compiled log level.
 */
static inline uint8_t mavlink_msg_rtls_device_status_get_log_level(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  67);
}

/**
 * @brief Get field dynamic_anchor_count from rtls_device_status message
 *
 * @return  Number of valid dynamic anchor entries.
 */
static inline uint8_t mavlink_msg_rtls_device_status_get_dynamic_anchor_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  68);
}

/**
 * @brief Get field dynamic_anchor_id from rtls_device_status message
 *
 * @return  Dynamic anchor IDs.
 */
static inline uint16_t mavlink_msg_rtls_device_status_get_dynamic_anchor_id(const mavlink_message_t* msg, uint8_t *dynamic_anchor_id)
{
    return _MAV_RETURN_uint8_t_array(msg, dynamic_anchor_id, 4,  69);
}

/**
 * @brief Get field dynamic_anchor_x_mm from rtls_device_status message
 *
 * @return [mm] Dynamic anchor X positions.
 */
static inline uint16_t mavlink_msg_rtls_device_status_get_dynamic_anchor_x_mm(const mavlink_message_t* msg, int32_t *dynamic_anchor_x_mm)
{
    return _MAV_RETURN_int32_t_array(msg, dynamic_anchor_x_mm, 4,  8);
}

/**
 * @brief Get field dynamic_anchor_y_mm from rtls_device_status message
 *
 * @return [mm] Dynamic anchor Y positions.
 */
static inline uint16_t mavlink_msg_rtls_device_status_get_dynamic_anchor_y_mm(const mavlink_message_t* msg, int32_t *dynamic_anchor_y_mm)
{
    return _MAV_RETURN_int32_t_array(msg, dynamic_anchor_y_mm, 4,  24);
}

/**
 * @brief Get field dynamic_anchor_z_mm from rtls_device_status message
 *
 * @return [mm] Dynamic anchor Z positions.
 */
static inline uint16_t mavlink_msg_rtls_device_status_get_dynamic_anchor_z_mm(const mavlink_message_t* msg, int32_t *dynamic_anchor_z_mm)
{
    return _MAV_RETURN_int32_t_array(msg, dynamic_anchor_z_mm, 4,  40);
}

/**
 * @brief Get field ip from rtls_device_status message
 *
 * @return  Device IPv4 address.
 */
static inline uint16_t mavlink_msg_rtls_device_status_get_ip(const mavlink_message_t* msg, uint8_t *ip)
{
    return _MAV_RETURN_uint8_t_array(msg, ip, 4,  73);
}

/**
 * @brief Get field mac from rtls_device_status message
 *
 * @return  WiFi MAC address.
 */
static inline uint16_t mavlink_msg_rtls_device_status_get_mac(const mavlink_message_t* msg, uint8_t *mac)
{
    return _MAV_RETURN_uint8_t_array(msg, mac, 6,  77);
}

/**
 * @brief Get field device_type from rtls_device_status message
 *
 * @return  Device type string.
 */
static inline uint16_t mavlink_msg_rtls_device_status_get_device_type(const mavlink_message_t* msg, char *device_type)
{
    return _MAV_RETURN_char_array(msg, device_type, 16,  83);
}

/**
 * @brief Get field short_addr from rtls_device_status message
 *
 * @return  UWB short address string.
 */
static inline uint16_t mavlink_msg_rtls_device_status_get_short_addr(const mavlink_message_t* msg, char *short_addr)
{
    return _MAV_RETURN_char_array(msg, short_addr, 8,  99);
}

/**
 * @brief Get field firmware_version from rtls_device_status message
 *
 * @return  Firmware version string.
 */
static inline uint16_t mavlink_msg_rtls_device_status_get_firmware_version(const mavlink_message_t* msg, char *firmware_version)
{
    return _MAV_RETURN_char_array(msg, firmware_version, 16,  107);
}

/**
 * @brief Decode a rtls_device_status message into a struct
 *
 * @param msg The message to decode
 * @param rtls_device_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_rtls_device_status_decode(const mavlink_message_t* msg, mavlink_rtls_device_status_t* rtls_device_status)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rtls_device_status->time_boot_ms = mavlink_msg_rtls_device_status_get_time_boot_ms(msg);
    rtls_device_status->flags = mavlink_msg_rtls_device_status_get_flags(msg);
    mavlink_msg_rtls_device_status_get_dynamic_anchor_x_mm(msg, rtls_device_status->dynamic_anchor_x_mm);
    mavlink_msg_rtls_device_status_get_dynamic_anchor_y_mm(msg, rtls_device_status->dynamic_anchor_y_mm);
    mavlink_msg_rtls_device_status_get_dynamic_anchor_z_mm(msg, rtls_device_status->dynamic_anchor_z_mm);
    rtls_device_status->avg_rate_chz = mavlink_msg_rtls_device_status_get_avg_rate_chz(msg);
    rtls_device_status->min_rate_chz = mavlink_msg_rtls_device_status_get_min_rate_chz(msg);
    rtls_device_status->max_rate_chz = mavlink_msg_rtls_device_status_get_max_rate_chz(msg);
    rtls_device_status->log_udp_port = mavlink_msg_rtls_device_status_get_log_udp_port(msg);
    rtls_device_status->role = mavlink_msg_rtls_device_status_get_role(msg);
    rtls_device_status->anchors_seen = mavlink_msg_rtls_device_status_get_anchors_seen(msg);
    rtls_device_status->mavlink_target_system = mavlink_msg_rtls_device_status_get_mavlink_target_system(msg);
    rtls_device_status->log_level = mavlink_msg_rtls_device_status_get_log_level(msg);
    rtls_device_status->dynamic_anchor_count = mavlink_msg_rtls_device_status_get_dynamic_anchor_count(msg);
    mavlink_msg_rtls_device_status_get_dynamic_anchor_id(msg, rtls_device_status->dynamic_anchor_id);
    mavlink_msg_rtls_device_status_get_ip(msg, rtls_device_status->ip);
    mavlink_msg_rtls_device_status_get_mac(msg, rtls_device_status->mac);
    mavlink_msg_rtls_device_status_get_device_type(msg, rtls_device_status->device_type);
    mavlink_msg_rtls_device_status_get_short_addr(msg, rtls_device_status->short_addr);
    mavlink_msg_rtls_device_status_get_firmware_version(msg, rtls_device_status->firmware_version);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN? msg->len : MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN;
        memset(rtls_device_status, 0, MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_LEN);
    memcpy(rtls_device_status, _MAV_PAYLOAD(msg), len);
#endif
}
