#pragma once
// MESSAGE RTLS_COMMAND PACKING

#define MAVLINK_MSG_ID_RTLS_COMMAND 52001


typedef struct __mavlink_rtls_command_t {
 uint32_t request_id; /*<  Client request id used to match responses.*/
 uint16_t command; /*<  RTLS command id.*/
 uint8_t name_len; /*<  Valid bytes in name.*/
 char name[32]; /*<  Optional command argument.*/
} mavlink_rtls_command_t;

#define MAVLINK_MSG_ID_RTLS_COMMAND_LEN 39
#define MAVLINK_MSG_ID_RTLS_COMMAND_MIN_LEN 39
#define MAVLINK_MSG_ID_52001_LEN 39
#define MAVLINK_MSG_ID_52001_MIN_LEN 39

#define MAVLINK_MSG_ID_RTLS_COMMAND_CRC 211
#define MAVLINK_MSG_ID_52001_CRC 211

#define MAVLINK_MSG_RTLS_COMMAND_FIELD_NAME_LEN 32

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RTLS_COMMAND { \
    52001, \
    "RTLS_COMMAND", \
    4, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_rtls_command_t, request_id) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_rtls_command_t, command) }, \
         { "name_len", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_rtls_command_t, name_len) }, \
         { "name", NULL, MAVLINK_TYPE_CHAR, 32, 7, offsetof(mavlink_rtls_command_t, name) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RTLS_COMMAND { \
    "RTLS_COMMAND", \
    4, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_rtls_command_t, request_id) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_rtls_command_t, command) }, \
         { "name_len", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_rtls_command_t, name_len) }, \
         { "name", NULL, MAVLINK_TYPE_CHAR, 32, 7, offsetof(mavlink_rtls_command_t, name) }, \
         } \
}
#endif

/**
 * @brief Pack a rtls_command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Client request id used to match responses.
 * @param command  RTLS command id.
 * @param name_len  Valid bytes in name.
 * @param name  Optional command argument.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtls_command_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t request_id, uint16_t command, uint8_t name_len, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTLS_COMMAND_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, name_len);
    _mav_put_char_array(buf, 7, name, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTLS_COMMAND_LEN);
#else
    mavlink_rtls_command_t packet;
    packet.request_id = request_id;
    packet.command = command;
    packet.name_len = name_len;
    mav_array_memcpy(packet.name, name, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTLS_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTLS_COMMAND;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RTLS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_CRC);
}

/**
 * @brief Pack a rtls_command message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Client request id used to match responses.
 * @param command  RTLS command id.
 * @param name_len  Valid bytes in name.
 * @param name  Optional command argument.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtls_command_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t request_id, uint16_t command, uint8_t name_len, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTLS_COMMAND_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, name_len);
    _mav_put_char_array(buf, 7, name, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTLS_COMMAND_LEN);
#else
    mavlink_rtls_command_t packet;
    packet.request_id = request_id;
    packet.command = command;
    packet.name_len = name_len;
    mav_array_memcpy(packet.name, name, sizeof(char)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTLS_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTLS_COMMAND;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RTLS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RTLS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_LEN);
#endif
}

/**
 * @brief Pack a rtls_command message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_id  Client request id used to match responses.
 * @param command  RTLS command id.
 * @param name_len  Valid bytes in name.
 * @param name  Optional command argument.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtls_command_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t request_id,uint16_t command,uint8_t name_len,const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTLS_COMMAND_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, name_len);
    _mav_put_char_array(buf, 7, name, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTLS_COMMAND_LEN);
#else
    mavlink_rtls_command_t packet;
    packet.request_id = request_id;
    packet.command = command;
    packet.name_len = name_len;
    mav_array_memcpy(packet.name, name, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTLS_COMMAND_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTLS_COMMAND;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RTLS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_CRC);
}

/**
 * @brief Encode a rtls_command struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rtls_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtls_command_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rtls_command_t* rtls_command)
{
    return mavlink_msg_rtls_command_pack(system_id, component_id, msg, rtls_command->request_id, rtls_command->command, rtls_command->name_len, rtls_command->name);
}

/**
 * @brief Encode a rtls_command struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rtls_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtls_command_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rtls_command_t* rtls_command)
{
    return mavlink_msg_rtls_command_pack_chan(system_id, component_id, chan, msg, rtls_command->request_id, rtls_command->command, rtls_command->name_len, rtls_command->name);
}

/**
 * @brief Encode a rtls_command struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param rtls_command C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtls_command_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_rtls_command_t* rtls_command)
{
    return mavlink_msg_rtls_command_pack_status(system_id, component_id, _status, msg,  rtls_command->request_id, rtls_command->command, rtls_command->name_len, rtls_command->name);
}

/**
 * @brief Send a rtls_command message
 * @param chan MAVLink channel to send the message
 *
 * @param request_id  Client request id used to match responses.
 * @param command  RTLS command id.
 * @param name_len  Valid bytes in name.
 * @param name  Optional command argument.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rtls_command_send(mavlink_channel_t chan, uint32_t request_id, uint16_t command, uint8_t name_len, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTLS_COMMAND_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, name_len);
    _mav_put_char_array(buf, 7, name, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_COMMAND, buf, MAVLINK_MSG_ID_RTLS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_CRC);
#else
    mavlink_rtls_command_t packet;
    packet.request_id = request_id;
    packet.command = command;
    packet.name_len = name_len;
    mav_array_memcpy(packet.name, name, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_COMMAND, (const char *)&packet, MAVLINK_MSG_ID_RTLS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_CRC);
#endif
}

/**
 * @brief Send a rtls_command message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rtls_command_send_struct(mavlink_channel_t chan, const mavlink_rtls_command_t* rtls_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rtls_command_send(chan, rtls_command->request_id, rtls_command->command, rtls_command->name_len, rtls_command->name);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_COMMAND, (const char *)rtls_command, MAVLINK_MSG_ID_RTLS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_CRC);
#endif
}

#if MAVLINK_MSG_ID_RTLS_COMMAND_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rtls_command_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t request_id, uint16_t command, uint8_t name_len, const char *name)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, name_len);
    _mav_put_char_array(buf, 7, name, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_COMMAND, buf, MAVLINK_MSG_ID_RTLS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_CRC);
#else
    mavlink_rtls_command_t *packet = (mavlink_rtls_command_t *)msgbuf;
    packet->request_id = request_id;
    packet->command = command;
    packet->name_len = name_len;
    mav_array_memcpy(packet->name, name, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_COMMAND, (const char *)packet, MAVLINK_MSG_ID_RTLS_COMMAND_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_CRC);
#endif
}
#endif

#endif

// MESSAGE RTLS_COMMAND UNPACKING


/**
 * @brief Get field request_id from rtls_command message
 *
 * @return  Client request id used to match responses.
 */
static inline uint32_t mavlink_msg_rtls_command_get_request_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field command from rtls_command message
 *
 * @return  RTLS command id.
 */
static inline uint16_t mavlink_msg_rtls_command_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field name_len from rtls_command message
 *
 * @return  Valid bytes in name.
 */
static inline uint8_t mavlink_msg_rtls_command_get_name_len(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field name from rtls_command message
 *
 * @return  Optional command argument.
 */
static inline uint16_t mavlink_msg_rtls_command_get_name(const mavlink_message_t* msg, char *name)
{
    return _MAV_RETURN_char_array(msg, name, 32,  7);
}

/**
 * @brief Decode a rtls_command message into a struct
 *
 * @param msg The message to decode
 * @param rtls_command C-struct to decode the message contents into
 */
static inline void mavlink_msg_rtls_command_decode(const mavlink_message_t* msg, mavlink_rtls_command_t* rtls_command)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rtls_command->request_id = mavlink_msg_rtls_command_get_request_id(msg);
    rtls_command->command = mavlink_msg_rtls_command_get_command(msg);
    rtls_command->name_len = mavlink_msg_rtls_command_get_name_len(msg);
    mavlink_msg_rtls_command_get_name(msg, rtls_command->name);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RTLS_COMMAND_LEN? msg->len : MAVLINK_MSG_ID_RTLS_COMMAND_LEN;
        memset(rtls_command, 0, MAVLINK_MSG_ID_RTLS_COMMAND_LEN);
    memcpy(rtls_command, _MAV_PAYLOAD(msg), len);
#endif
}
