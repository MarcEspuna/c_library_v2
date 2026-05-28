#pragma once
// MESSAGE RTLS_COMMAND_RESPONSE PACKING

#define MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE 52002


typedef struct __mavlink_rtls_command_response_t {
 uint32_t request_id; /*<  Client request id.*/
 uint16_t command; /*<  RTLS command id.*/
 uint8_t result; /*<  Command result.*/
 uint8_t payload_type; /*<  Payload encoding.*/
 uint8_t chunk_index; /*<  Zero-based payload chunk index.*/
 uint8_t chunk_count; /*<  Total payload chunks for this response.*/
 uint8_t payload_len; /*<  Valid bytes in payload.*/
 uint8_t payload[220]; /*<  Response payload.*/
} mavlink_rtls_command_response_t;

#define MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN 231
#define MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_MIN_LEN 231
#define MAVLINK_MSG_ID_52002_LEN 231
#define MAVLINK_MSG_ID_52002_MIN_LEN 231

#define MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_CRC 161
#define MAVLINK_MSG_ID_52002_CRC 161

#define MAVLINK_MSG_RTLS_COMMAND_RESPONSE_FIELD_PAYLOAD_LEN 220

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RTLS_COMMAND_RESPONSE { \
    52002, \
    "RTLS_COMMAND_RESPONSE", \
    8, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_rtls_command_response_t, request_id) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_rtls_command_response_t, command) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_rtls_command_response_t, result) }, \
         { "payload_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_rtls_command_response_t, payload_type) }, \
         { "chunk_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_rtls_command_response_t, chunk_index) }, \
         { "chunk_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_rtls_command_response_t, chunk_count) }, \
         { "payload_len", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_rtls_command_response_t, payload_len) }, \
         { "payload", NULL, MAVLINK_TYPE_UINT8_T, 220, 11, offsetof(mavlink_rtls_command_response_t, payload) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RTLS_COMMAND_RESPONSE { \
    "RTLS_COMMAND_RESPONSE", \
    8, \
    {  { "request_id", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_rtls_command_response_t, request_id) }, \
         { "command", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_rtls_command_response_t, command) }, \
         { "result", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_rtls_command_response_t, result) }, \
         { "payload_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_rtls_command_response_t, payload_type) }, \
         { "chunk_index", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_rtls_command_response_t, chunk_index) }, \
         { "chunk_count", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_rtls_command_response_t, chunk_count) }, \
         { "payload_len", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_rtls_command_response_t, payload_len) }, \
         { "payload", NULL, MAVLINK_TYPE_UINT8_T, 220, 11, offsetof(mavlink_rtls_command_response_t, payload) }, \
         } \
}
#endif

/**
 * @brief Pack a rtls_command_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Client request id.
 * @param command  RTLS command id.
 * @param result  Command result.
 * @param payload_type  Payload encoding.
 * @param chunk_index  Zero-based payload chunk index.
 * @param chunk_count  Total payload chunks for this response.
 * @param payload_len  Valid bytes in payload.
 * @param payload  Response payload.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtls_command_response_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t request_id, uint16_t command, uint8_t result, uint8_t payload_type, uint8_t chunk_index, uint8_t chunk_count, uint8_t payload_len, const uint8_t *payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, result);
    _mav_put_uint8_t(buf, 7, payload_type);
    _mav_put_uint8_t(buf, 8, chunk_index);
    _mav_put_uint8_t(buf, 9, chunk_count);
    _mav_put_uint8_t(buf, 10, payload_len);
    _mav_put_uint8_t_array(buf, 11, payload, 220);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN);
#else
    mavlink_rtls_command_response_t packet;
    packet.request_id = request_id;
    packet.command = command;
    packet.result = result;
    packet.payload_type = payload_type;
    packet.chunk_index = chunk_index;
    packet.chunk_count = chunk_count;
    packet.payload_len = payload_len;
    mav_array_memcpy(packet.payload, payload, 220);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_CRC);
}

/**
 * @brief Pack a rtls_command_response message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param request_id  Client request id.
 * @param command  RTLS command id.
 * @param result  Command result.
 * @param payload_type  Payload encoding.
 * @param chunk_index  Zero-based payload chunk index.
 * @param chunk_count  Total payload chunks for this response.
 * @param payload_len  Valid bytes in payload.
 * @param payload  Response payload.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtls_command_response_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t request_id, uint16_t command, uint8_t result, uint8_t payload_type, uint8_t chunk_index, uint8_t chunk_count, uint8_t payload_len, const uint8_t *payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, result);
    _mav_put_uint8_t(buf, 7, payload_type);
    _mav_put_uint8_t(buf, 8, chunk_index);
    _mav_put_uint8_t(buf, 9, chunk_count);
    _mav_put_uint8_t(buf, 10, payload_len);
    _mav_put_uint8_t_array(buf, 11, payload, 220);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN);
#else
    mavlink_rtls_command_response_t packet;
    packet.request_id = request_id;
    packet.command = command;
    packet.result = result;
    packet.payload_type = payload_type;
    packet.chunk_index = chunk_index;
    packet.chunk_count = chunk_count;
    packet.payload_len = payload_len;
    mav_array_memcpy(packet.payload, payload, sizeof(uint8_t)*220);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN);
#endif
}

/**
 * @brief Pack a rtls_command_response message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param request_id  Client request id.
 * @param command  RTLS command id.
 * @param result  Command result.
 * @param payload_type  Payload encoding.
 * @param chunk_index  Zero-based payload chunk index.
 * @param chunk_count  Total payload chunks for this response.
 * @param payload_len  Valid bytes in payload.
 * @param payload  Response payload.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtls_command_response_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t request_id,uint16_t command,uint8_t result,uint8_t payload_type,uint8_t chunk_index,uint8_t chunk_count,uint8_t payload_len,const uint8_t *payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, result);
    _mav_put_uint8_t(buf, 7, payload_type);
    _mav_put_uint8_t(buf, 8, chunk_index);
    _mav_put_uint8_t(buf, 9, chunk_count);
    _mav_put_uint8_t(buf, 10, payload_len);
    _mav_put_uint8_t_array(buf, 11, payload, 220);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN);
#else
    mavlink_rtls_command_response_t packet;
    packet.request_id = request_id;
    packet.command = command;
    packet.result = result;
    packet.payload_type = payload_type;
    packet.chunk_index = chunk_index;
    packet.chunk_count = chunk_count;
    packet.payload_len = payload_len;
    mav_array_memcpy(packet.payload, payload, 220);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_CRC);
}

/**
 * @brief Encode a rtls_command_response struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rtls_command_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtls_command_response_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rtls_command_response_t* rtls_command_response)
{
    return mavlink_msg_rtls_command_response_pack(system_id, component_id, msg, rtls_command_response->request_id, rtls_command_response->command, rtls_command_response->result, rtls_command_response->payload_type, rtls_command_response->chunk_index, rtls_command_response->chunk_count, rtls_command_response->payload_len, rtls_command_response->payload);
}

/**
 * @brief Encode a rtls_command_response struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rtls_command_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtls_command_response_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rtls_command_response_t* rtls_command_response)
{
    return mavlink_msg_rtls_command_response_pack_chan(system_id, component_id, chan, msg, rtls_command_response->request_id, rtls_command_response->command, rtls_command_response->result, rtls_command_response->payload_type, rtls_command_response->chunk_index, rtls_command_response->chunk_count, rtls_command_response->payload_len, rtls_command_response->payload);
}

/**
 * @brief Encode a rtls_command_response struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param rtls_command_response C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtls_command_response_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_rtls_command_response_t* rtls_command_response)
{
    return mavlink_msg_rtls_command_response_pack_status(system_id, component_id, _status, msg,  rtls_command_response->request_id, rtls_command_response->command, rtls_command_response->result, rtls_command_response->payload_type, rtls_command_response->chunk_index, rtls_command_response->chunk_count, rtls_command_response->payload_len, rtls_command_response->payload);
}

/**
 * @brief Send a rtls_command_response message
 * @param chan MAVLink channel to send the message
 *
 * @param request_id  Client request id.
 * @param command  RTLS command id.
 * @param result  Command result.
 * @param payload_type  Payload encoding.
 * @param chunk_index  Zero-based payload chunk index.
 * @param chunk_count  Total payload chunks for this response.
 * @param payload_len  Valid bytes in payload.
 * @param payload  Response payload.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rtls_command_response_send(mavlink_channel_t chan, uint32_t request_id, uint16_t command, uint8_t result, uint8_t payload_type, uint8_t chunk_index, uint8_t chunk_count, uint8_t payload_len, const uint8_t *payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN];
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, result);
    _mav_put_uint8_t(buf, 7, payload_type);
    _mav_put_uint8_t(buf, 8, chunk_index);
    _mav_put_uint8_t(buf, 9, chunk_count);
    _mav_put_uint8_t(buf, 10, payload_len);
    _mav_put_uint8_t_array(buf, 11, payload, 220);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE, buf, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_CRC);
#else
    mavlink_rtls_command_response_t packet;
    packet.request_id = request_id;
    packet.command = command;
    packet.result = result;
    packet.payload_type = payload_type;
    packet.chunk_index = chunk_index;
    packet.chunk_count = chunk_count;
    packet.payload_len = payload_len;
    mav_array_memcpy(packet.payload, payload, 220);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE, (const char *)&packet, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_CRC);
#endif
}

/**
 * @brief Send a rtls_command_response message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rtls_command_response_send_struct(mavlink_channel_t chan, const mavlink_rtls_command_response_t* rtls_command_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rtls_command_response_send(chan, rtls_command_response->request_id, rtls_command_response->command, rtls_command_response->result, rtls_command_response->payload_type, rtls_command_response->chunk_index, rtls_command_response->chunk_count, rtls_command_response->payload_len, rtls_command_response->payload);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE, (const char *)rtls_command_response, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_CRC);
#endif
}

#if MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by reusing
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rtls_command_response_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t request_id, uint16_t command, uint8_t result, uint8_t payload_type, uint8_t chunk_index, uint8_t chunk_count, uint8_t payload_len, const uint8_t *payload)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, request_id);
    _mav_put_uint16_t(buf, 4, command);
    _mav_put_uint8_t(buf, 6, result);
    _mav_put_uint8_t(buf, 7, payload_type);
    _mav_put_uint8_t(buf, 8, chunk_index);
    _mav_put_uint8_t(buf, 9, chunk_count);
    _mav_put_uint8_t(buf, 10, payload_len);
    _mav_put_uint8_t_array(buf, 11, payload, 220);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE, buf, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_CRC);
#else
    mavlink_rtls_command_response_t *packet = (mavlink_rtls_command_response_t *)msgbuf;
    packet->request_id = request_id;
    packet->command = command;
    packet->result = result;
    packet->payload_type = payload_type;
    packet->chunk_index = chunk_index;
    packet->chunk_count = chunk_count;
    packet->payload_len = payload_len;
    mav_array_memcpy(packet->payload, payload, 220);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE, (const char *)packet, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_MIN_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_CRC);
#endif
}
#endif

#endif

// MESSAGE RTLS_COMMAND_RESPONSE UNPACKING


/**
 * @brief Get field request_id from rtls_command_response message
 *
 * @return  Client request id.
 */
static inline uint32_t mavlink_msg_rtls_command_response_get_request_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field command from rtls_command_response message
 *
 * @return  RTLS command id.
 */
static inline uint16_t mavlink_msg_rtls_command_response_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field result from rtls_command_response message
 *
 * @return  Command result.
 */
static inline uint8_t mavlink_msg_rtls_command_response_get_result(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field payload_type from rtls_command_response message
 *
 * @return  Payload encoding.
 */
static inline uint8_t mavlink_msg_rtls_command_response_get_payload_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field chunk_index from rtls_command_response message
 *
 * @return  Zero-based payload chunk index.
 */
static inline uint8_t mavlink_msg_rtls_command_response_get_chunk_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field chunk_count from rtls_command_response message
 *
 * @return  Total payload chunks for this response.
 */
static inline uint8_t mavlink_msg_rtls_command_response_get_chunk_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field payload_len from rtls_command_response message
 *
 * @return  Valid bytes in payload.
 */
static inline uint8_t mavlink_msg_rtls_command_response_get_payload_len(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field payload from rtls_command_response message
 *
 * @return  Response payload.
 */
static inline uint16_t mavlink_msg_rtls_command_response_get_payload(const mavlink_message_t* msg, uint8_t *payload)
{
    return _MAV_RETURN_uint8_t_array(msg, payload, 220,  11);
}

/**
 * @brief Decode a rtls_command_response message into a struct
 *
 * @param msg The message to decode
 * @param rtls_command_response C-struct to decode the message contents into
 */
static inline void mavlink_msg_rtls_command_response_decode(const mavlink_message_t* msg, mavlink_rtls_command_response_t* rtls_command_response)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rtls_command_response->request_id = mavlink_msg_rtls_command_response_get_request_id(msg);
    rtls_command_response->command = mavlink_msg_rtls_command_response_get_command(msg);
    rtls_command_response->result = mavlink_msg_rtls_command_response_get_result(msg);
    rtls_command_response->payload_type = mavlink_msg_rtls_command_response_get_payload_type(msg);
    rtls_command_response->chunk_index = mavlink_msg_rtls_command_response_get_chunk_index(msg);
    rtls_command_response->chunk_count = mavlink_msg_rtls_command_response_get_chunk_count(msg);
    rtls_command_response->payload_len = mavlink_msg_rtls_command_response_get_payload_len(msg);
    mavlink_msg_rtls_command_response_get_payload(msg, rtls_command_response->payload);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN? msg->len : MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN;
        memset(rtls_command_response, 0, MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_LEN);
    memcpy(rtls_command_response, _MAV_PAYLOAD(msg), len);
#endif
}
