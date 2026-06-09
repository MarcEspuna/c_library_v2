/** @file
 *  @brief MAVLink comm protocol generated from rtlslink.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_RTLSLINK_H
#define MAVLINK_RTLSLINK_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_RTLSLINK.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_RTLSLINK_XML_HASH -625786920876255068

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{0, 50, 9, 9, 0, 0, 0}, {300, 217, 22, 22, 0, 0, 0}, {320, 243, 20, 20, 3, 2, 3}, {321, 88, 2, 2, 3, 0, 1}, {322, 243, 149, 149, 0, 0, 0}, {323, 78, 147, 147, 3, 0, 1}, {324, 132, 146, 146, 0, 0, 0}, {52000, 247, 175, 175, 0, 0, 0}, {52001, 211, 39, 39, 0, 0, 0}, {52002, 161, 231, 231, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_RTLSLINK

// ENUM DEFINITIONS


/** @brief RTLS-Link device role. */
#ifndef HAVE_ENUM_RTLS_DEVICE_ROLE
#define HAVE_ENUM_RTLS_DEVICE_ROLE
typedef enum RTLS_DEVICE_ROLE
{
   RTLS_DEVICE_ROLE_UNKNOWN=0, /*  | */
   RTLS_DEVICE_ROLE_ANCHOR_TDOA=3, /*  | */
   RTLS_DEVICE_ROLE_TAG_TDOA=4, /*  | */
   RTLS_DEVICE_ROLE_ENUM_END=5, /*  | */
} RTLS_DEVICE_ROLE;
#endif

/** @brief RTLS-Link status flags. */
#ifndef HAVE_ENUM_RTLS_DEVICE_STATUS_FLAGS
#define HAVE_ENUM_RTLS_DEVICE_STATUS_FLAGS
typedef enum RTLS_DEVICE_STATUS_FLAGS
{
   RTLS_DEVICE_STATUS_FLAG_SENDING_POSITION=1, /*  | */
   RTLS_DEVICE_STATUS_FLAG_ORIGIN_SENT=2, /*  | */
   RTLS_DEVICE_STATUS_FLAG_RANGEFINDER_ENABLED=4, /*  | */
   RTLS_DEVICE_STATUS_FLAG_RANGEFINDER_HEALTHY=8, /*  | */
   RTLS_DEVICE_STATUS_FLAG_UWB_ENABLED=16, /*  | */
   RTLS_DEVICE_STATUS_FLAG_RF_FORWARD_ENABLED=32, /*  | */
   RTLS_DEVICE_STATUS_FLAG_LOG_SERIAL_ENABLED=64, /*  | */
   RTLS_DEVICE_STATUS_FLAG_LOG_UDP_ENABLED=128, /*  | */
   RTLS_DEVICE_STATUS_FLAG_DYNAMIC_ANCHORS_ENABLED=256, /*  | */
   RTLS_DEVICE_STATUS_FLAGS_ENUM_END=257, /*  | */
} RTLS_DEVICE_STATUS_FLAGS;
#endif

/** @brief RTLS-Link management commands sent on the MAVLink management endpoint. */
#ifndef HAVE_ENUM_RTLS_COMMAND
#define HAVE_ENUM_RTLS_COMMAND
typedef enum RTLS_COMMAND
{
   RTLS_COMMAND_NONE=0, /*  | */
   RTLS_COMMAND_REBOOT=1, /*  | */
   RTLS_COMMAND_FIRMWARE_INFO=2, /*  | */
   RTLS_COMMAND_SAVE_CONFIG=3, /*  | */
   RTLS_COMMAND_LOAD_CONFIG=4, /*  | */
   RTLS_COMMAND_BACKUP_CONFIG=5, /*  | */
   RTLS_COMMAND_LIST_CONFIGS=6, /*  | */
   RTLS_COMMAND_SAVE_CONFIG_AS=7, /*  | */
   RTLS_COMMAND_LOAD_CONFIG_NAMED=8, /*  | */
   RTLS_COMMAND_READ_CONFIG_NAMED=9, /*  | */
   RTLS_COMMAND_DELETE_CONFIG=10, /*  | */
   RTLS_COMMAND_TOGGLE_LED2=11, /*  | */
   RTLS_COMMAND_GET_LED2_STATE=12, /*  | */
   RTLS_COMMAND_TDOA_DISTANCES=13, /*  | */
   RTLS_COMMAND_TDOA_ANCHOR_STATS=14, /*  | */
   RTLS_COMMAND_TDOA_ANCHOR_MODEL_RESET=15, /*  | */
   RTLS_COMMAND_TDOA_ANCHOR_MODEL_COLLECT_START=16, /*  | */
   RTLS_COMMAND_TDOA_ANCHOR_MODEL_COLLECT_STATUS=17, /*  | */
   RTLS_COMMAND_TDOA_ANCHOR_MODEL_LOCK=18, /*  | */
   RTLS_COMMAND_TDOA_ANCHOR_MODEL_STATUS=19, /*  | */
   RTLS_COMMAND_TDOA_ANCHOR_MODEL_EXPORT=20, /*  | */
   RTLS_COMMAND_TDOA_ESTIMATOR_STATS_RESET=21, /*  | */
   RTLS_COMMAND_TDOA_ESTIMATOR_STATUS=22, /*  | */
   RTLS_COMMAND_ENUM_END=23, /*  | */
} RTLS_COMMAND;
#endif

/** @brief RTLS-Link management command result. */
#ifndef HAVE_ENUM_RTLS_RESULT
#define HAVE_ENUM_RTLS_RESULT
typedef enum RTLS_RESULT
{
   RTLS_RESULT_ACCEPTED=0, /*  | */
   RTLS_RESULT_FAILED=1, /*  | */
   RTLS_RESULT_UNSUPPORTED=2, /*  | */
   RTLS_RESULT_INVALID_MODE=3, /*  | */
   RTLS_RESULT_NOT_FOUND=4, /*  | */
   RTLS_RESULT_INVALID_ARGUMENT=5, /*  | */
   RTLS_RESULT_ENUM_END=6, /*  | */
} RTLS_RESULT;
#endif

/** @brief RTLS-Link payload encoding. */
#ifndef HAVE_ENUM_RTLS_PAYLOAD_TYPE
#define HAVE_ENUM_RTLS_PAYLOAD_TYPE
typedef enum RTLS_PAYLOAD_TYPE
{
   RTLS_PAYLOAD_TYPE_NONE=0, /*  | */
   RTLS_PAYLOAD_TYPE_BINARY_FRAME=1, /*  | */
   RTLS_PAYLOAD_TYPE_TEXT=2, /*  | */
   RTLS_PAYLOAD_TYPE_ENUM_END=3, /*  | */
} RTLS_PAYLOAD_TYPE;
#endif

/** @brief Specifies the datatype of a MAVLink extended parameter. */
#ifndef HAVE_ENUM_MAV_PARAM_EXT_TYPE
#define HAVE_ENUM_MAV_PARAM_EXT_TYPE
typedef enum MAV_PARAM_EXT_TYPE
{
   MAV_PARAM_EXT_TYPE_UINT8=1, /*  | */
   MAV_PARAM_EXT_TYPE_INT8=2, /*  | */
   MAV_PARAM_EXT_TYPE_UINT16=3, /*  | */
   MAV_PARAM_EXT_TYPE_INT16=4, /*  | */
   MAV_PARAM_EXT_TYPE_UINT32=5, /*  | */
   MAV_PARAM_EXT_TYPE_INT32=6, /*  | */
   MAV_PARAM_EXT_TYPE_UINT64=7, /*  | */
   MAV_PARAM_EXT_TYPE_INT64=8, /*  | */
   MAV_PARAM_EXT_TYPE_REAL32=9, /*  | */
   MAV_PARAM_EXT_TYPE_REAL64=10, /*  | */
   MAV_PARAM_EXT_TYPE_CUSTOM=11, /*  | */
   MAV_PARAM_EXT_TYPE_ENUM_END=12, /*  | */
} MAV_PARAM_EXT_TYPE;
#endif

/** @brief Result from PARAM_EXT_SET message. */
#ifndef HAVE_ENUM_PARAM_ACK
#define HAVE_ENUM_PARAM_ACK
typedef enum PARAM_ACK
{
   PARAM_ACK_ACCEPTED=0, /*  | */
   PARAM_ACK_VALUE_UNSUPPORTED=1, /*  | */
   PARAM_ACK_FAILED=2, /*  | */
   PARAM_ACK_IN_PROGRESS=3, /*  | */
   PARAM_ACK_ENUM_END=4, /*  | */
} PARAM_ACK;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 3
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_param_ext_request_read.h"
#include "./mavlink_msg_param_ext_request_list.h"
#include "./mavlink_msg_param_ext_value.h"
#include "./mavlink_msg_param_ext_set.h"
#include "./mavlink_msg_param_ext_ack.h"
#include "./mavlink_msg_rtls_device_status.h"
#include "./mavlink_msg_rtls_command.h"
#include "./mavlink_msg_rtls_command_response.h"

// base include
#include "../minimal/minimal.h"


#if MAVLINK_RTLSLINK_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_PROTOCOL_VERSION, MAVLINK_MESSAGE_INFO_PARAM_EXT_REQUEST_READ, MAVLINK_MESSAGE_INFO_PARAM_EXT_REQUEST_LIST, MAVLINK_MESSAGE_INFO_PARAM_EXT_VALUE, MAVLINK_MESSAGE_INFO_PARAM_EXT_SET, MAVLINK_MESSAGE_INFO_PARAM_EXT_ACK, MAVLINK_MESSAGE_INFO_RTLS_DEVICE_STATUS, MAVLINK_MESSAGE_INFO_RTLS_COMMAND, MAVLINK_MESSAGE_INFO_RTLS_COMMAND_RESPONSE}
# define MAVLINK_MESSAGE_NAMES {{ "HEARTBEAT", 0 }, { "PARAM_EXT_ACK", 324 }, { "PARAM_EXT_REQUEST_LIST", 321 }, { "PARAM_EXT_REQUEST_READ", 320 }, { "PARAM_EXT_SET", 323 }, { "PARAM_EXT_VALUE", 322 }, { "PROTOCOL_VERSION", 300 }, { "RTLS_COMMAND", 52001 }, { "RTLS_COMMAND_RESPONSE", 52002 }, { "RTLS_DEVICE_STATUS", 52000 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_RTLSLINK_H
