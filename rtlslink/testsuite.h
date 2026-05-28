/** @file
 *    @brief MAVLink comm protocol testsuite generated from rtlslink.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef RTLSLINK_TESTSUITE_H
#define RTLSLINK_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_minimal(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_rtlslink(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_minimal(system_id, component_id, last_msg);
    mavlink_test_rtlslink(system_id, component_id, last_msg);
}
#endif

#include "../minimal/testsuite.h"


static void mavlink_test_param_ext_request_read(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PARAM_EXT_REQUEST_READ >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_param_ext_request_read_t packet_in = {
        17235,139,206,"EFGHIJKLMNOPQRS"
    };
    mavlink_param_ext_request_read_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param_index = packet_in.param_index;
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        
        mav_array_memcpy(packet1.param_id, packet_in.param_id, sizeof(char)*16);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PARAM_EXT_REQUEST_READ_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PARAM_EXT_REQUEST_READ_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_request_read_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_param_ext_request_read_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_request_read_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.param_id , packet1.param_index );
    mavlink_msg_param_ext_request_read_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_request_read_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.param_id , packet1.param_index );
    mavlink_msg_param_ext_request_read_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_param_ext_request_read_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_request_read_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.param_id , packet1.param_index );
    mavlink_msg_param_ext_request_read_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("PARAM_EXT_REQUEST_READ") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_PARAM_EXT_REQUEST_READ) != NULL);
#endif
}

static void mavlink_test_param_ext_request_list(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PARAM_EXT_REQUEST_LIST >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_param_ext_request_list_t packet_in = {
        5,72
    };
    mavlink_param_ext_request_list_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PARAM_EXT_REQUEST_LIST_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PARAM_EXT_REQUEST_LIST_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_request_list_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_param_ext_request_list_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_request_list_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component );
    mavlink_msg_param_ext_request_list_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_request_list_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component );
    mavlink_msg_param_ext_request_list_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_param_ext_request_list_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_request_list_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component );
    mavlink_msg_param_ext_request_list_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("PARAM_EXT_REQUEST_LIST") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_PARAM_EXT_REQUEST_LIST) != NULL);
#endif
}

static void mavlink_test_param_ext_value(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PARAM_EXT_VALUE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_param_ext_value_t packet_in = {
        17235,17339,"EFGHIJKLMNOPQRS","UVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQ",193
    };
    mavlink_param_ext_value_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param_count = packet_in.param_count;
        packet1.param_index = packet_in.param_index;
        packet1.param_type = packet_in.param_type;
        
        mav_array_memcpy(packet1.param_id, packet_in.param_id, sizeof(char)*16);
        mav_array_memcpy(packet1.param_value, packet_in.param_value, sizeof(char)*128);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PARAM_EXT_VALUE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PARAM_EXT_VALUE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_value_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_param_ext_value_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_value_pack(system_id, component_id, &msg , packet1.param_id , packet1.param_value , packet1.param_type , packet1.param_count , packet1.param_index );
    mavlink_msg_param_ext_value_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_value_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.param_id , packet1.param_value , packet1.param_type , packet1.param_count , packet1.param_index );
    mavlink_msg_param_ext_value_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_param_ext_value_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_value_send(MAVLINK_COMM_1 , packet1.param_id , packet1.param_value , packet1.param_type , packet1.param_count , packet1.param_index );
    mavlink_msg_param_ext_value_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("PARAM_EXT_VALUE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_PARAM_EXT_VALUE) != NULL);
#endif
}

static void mavlink_test_param_ext_set(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PARAM_EXT_SET >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_param_ext_set_t packet_in = {
        5,72,"CDEFGHIJKLMNOPQ","STUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNO",59
    };
    mavlink_param_ext_set_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        packet1.param_type = packet_in.param_type;
        
        mav_array_memcpy(packet1.param_id, packet_in.param_id, sizeof(char)*16);
        mav_array_memcpy(packet1.param_value, packet_in.param_value, sizeof(char)*128);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PARAM_EXT_SET_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PARAM_EXT_SET_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_set_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_param_ext_set_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_set_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.param_id , packet1.param_value , packet1.param_type );
    mavlink_msg_param_ext_set_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_set_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.param_id , packet1.param_value , packet1.param_type );
    mavlink_msg_param_ext_set_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_param_ext_set_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_set_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.param_id , packet1.param_value , packet1.param_type );
    mavlink_msg_param_ext_set_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("PARAM_EXT_SET") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_PARAM_EXT_SET) != NULL);
#endif
}

static void mavlink_test_param_ext_ack(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_PARAM_EXT_ACK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_param_ext_ack_t packet_in = {
        "ABCDEFGHIJKLMNO","QRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM",181,248
    };
    mavlink_param_ext_ack_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param_type = packet_in.param_type;
        packet1.param_result = packet_in.param_result;
        
        mav_array_memcpy(packet1.param_id, packet_in.param_id, sizeof(char)*16);
        mav_array_memcpy(packet1.param_value, packet_in.param_value, sizeof(char)*128);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_PARAM_EXT_ACK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_PARAM_EXT_ACK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_ack_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_param_ext_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_ack_pack(system_id, component_id, &msg , packet1.param_id , packet1.param_value , packet1.param_type , packet1.param_result );
    mavlink_msg_param_ext_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_ack_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.param_id , packet1.param_value , packet1.param_type , packet1.param_result );
    mavlink_msg_param_ext_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_param_ext_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_param_ext_ack_send(MAVLINK_COMM_1 , packet1.param_id , packet1.param_value , packet1.param_type , packet1.param_result );
    mavlink_msg_param_ext_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("PARAM_EXT_ACK") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_PARAM_EXT_ACK) != NULL);
#endif
}

static void mavlink_test_rtls_device_status(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RTLS_DEVICE_STATUS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_rtls_device_status_t packet_in = {
        963497464,963497672,{ 963497880, 963497881, 963497882, 963497883 },{ 963498712, 963498713, 963498714, 963498715 },{ 963499544, 963499545, 963499546, 963499547 },20147,20251,20355,20459,197,8,75,142,209,{ 20, 21, 22, 23 },{ 32, 33, 34, 35 },{ 44, 45, 46, 47, 48, 49 },"FGHIJKLMNOPQRST","VWXYZAB","DEFGHIJKLMNOPQR"
    };
    mavlink_rtls_device_status_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_boot_ms = packet_in.time_boot_ms;
        packet1.flags = packet_in.flags;
        packet1.avg_rate_chz = packet_in.avg_rate_chz;
        packet1.min_rate_chz = packet_in.min_rate_chz;
        packet1.max_rate_chz = packet_in.max_rate_chz;
        packet1.log_udp_port = packet_in.log_udp_port;
        packet1.role = packet_in.role;
        packet1.anchors_seen = packet_in.anchors_seen;
        packet1.mavlink_target_system = packet_in.mavlink_target_system;
        packet1.log_level = packet_in.log_level;
        packet1.dynamic_anchor_count = packet_in.dynamic_anchor_count;
        
        mav_array_memcpy(packet1.dynamic_anchor_x_mm, packet_in.dynamic_anchor_x_mm, sizeof(int32_t)*4);
        mav_array_memcpy(packet1.dynamic_anchor_y_mm, packet_in.dynamic_anchor_y_mm, sizeof(int32_t)*4);
        mav_array_memcpy(packet1.dynamic_anchor_z_mm, packet_in.dynamic_anchor_z_mm, sizeof(int32_t)*4);
        mav_array_memcpy(packet1.dynamic_anchor_id, packet_in.dynamic_anchor_id, sizeof(uint8_t)*4);
        mav_array_memcpy(packet1.ip, packet_in.ip, sizeof(uint8_t)*4);
        mav_array_memcpy(packet1.mac, packet_in.mac, sizeof(uint8_t)*6);
        mav_array_memcpy(packet1.device_type, packet_in.device_type, sizeof(char)*16);
        mav_array_memcpy(packet1.short_addr, packet_in.short_addr, sizeof(char)*8);
        mav_array_memcpy(packet1.firmware_version, packet_in.firmware_version, sizeof(char)*16);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RTLS_DEVICE_STATUS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtls_device_status_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_rtls_device_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtls_device_status_pack(system_id, component_id, &msg , packet1.time_boot_ms , packet1.flags , packet1.avg_rate_chz , packet1.min_rate_chz , packet1.max_rate_chz , packet1.log_udp_port , packet1.role , packet1.anchors_seen , packet1.mavlink_target_system , packet1.log_level , packet1.dynamic_anchor_count , packet1.dynamic_anchor_id , packet1.dynamic_anchor_x_mm , packet1.dynamic_anchor_y_mm , packet1.dynamic_anchor_z_mm , packet1.ip , packet1.mac , packet1.device_type , packet1.short_addr , packet1.firmware_version );
    mavlink_msg_rtls_device_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtls_device_status_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_boot_ms , packet1.flags , packet1.avg_rate_chz , packet1.min_rate_chz , packet1.max_rate_chz , packet1.log_udp_port , packet1.role , packet1.anchors_seen , packet1.mavlink_target_system , packet1.log_level , packet1.dynamic_anchor_count , packet1.dynamic_anchor_id , packet1.dynamic_anchor_x_mm , packet1.dynamic_anchor_y_mm , packet1.dynamic_anchor_z_mm , packet1.ip , packet1.mac , packet1.device_type , packet1.short_addr , packet1.firmware_version );
    mavlink_msg_rtls_device_status_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_rtls_device_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtls_device_status_send(MAVLINK_COMM_1 , packet1.time_boot_ms , packet1.flags , packet1.avg_rate_chz , packet1.min_rate_chz , packet1.max_rate_chz , packet1.log_udp_port , packet1.role , packet1.anchors_seen , packet1.mavlink_target_system , packet1.log_level , packet1.dynamic_anchor_count , packet1.dynamic_anchor_id , packet1.dynamic_anchor_x_mm , packet1.dynamic_anchor_y_mm , packet1.dynamic_anchor_z_mm , packet1.ip , packet1.mac , packet1.device_type , packet1.short_addr , packet1.firmware_version );
    mavlink_msg_rtls_device_status_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RTLS_DEVICE_STATUS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RTLS_DEVICE_STATUS) != NULL);
#endif
}

static void mavlink_test_rtls_command(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RTLS_COMMAND >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_rtls_command_t packet_in = {
        963497464,17443,151,"HIJKLMNOPQRSTUVWXYZABCDEFGHIJKL"
    };
    mavlink_rtls_command_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.request_id = packet_in.request_id;
        packet1.command = packet_in.command;
        packet1.name_len = packet_in.name_len;
        
        mav_array_memcpy(packet1.name, packet_in.name, sizeof(char)*32);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RTLS_COMMAND_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RTLS_COMMAND_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtls_command_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_rtls_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtls_command_pack(system_id, component_id, &msg , packet1.request_id , packet1.command , packet1.name_len , packet1.name );
    mavlink_msg_rtls_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtls_command_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.request_id , packet1.command , packet1.name_len , packet1.name );
    mavlink_msg_rtls_command_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_rtls_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtls_command_send(MAVLINK_COMM_1 , packet1.request_id , packet1.command , packet1.name_len , packet1.name );
    mavlink_msg_rtls_command_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RTLS_COMMAND") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RTLS_COMMAND) != NULL);
#endif
}

static void mavlink_test_rtls_command_response(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_rtls_command_response_t packet_in = {
        963497464,17443,151,218,29,96,163,{ 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193 }
    };
    mavlink_rtls_command_response_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.request_id = packet_in.request_id;
        packet1.command = packet_in.command;
        packet1.result = packet_in.result;
        packet1.payload_type = packet_in.payload_type;
        packet1.chunk_index = packet_in.chunk_index;
        packet1.chunk_count = packet_in.chunk_count;
        packet1.payload_len = packet_in.payload_len;
        
        mav_array_memcpy(packet1.payload, packet_in.payload, sizeof(uint8_t)*220);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtls_command_response_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_rtls_command_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtls_command_response_pack(system_id, component_id, &msg , packet1.request_id , packet1.command , packet1.result , packet1.payload_type , packet1.chunk_index , packet1.chunk_count , packet1.payload_len , packet1.payload );
    mavlink_msg_rtls_command_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtls_command_response_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.request_id , packet1.command , packet1.result , packet1.payload_type , packet1.chunk_index , packet1.chunk_count , packet1.payload_len , packet1.payload );
    mavlink_msg_rtls_command_response_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_rtls_command_response_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtls_command_response_send(MAVLINK_COMM_1 , packet1.request_id , packet1.command , packet1.result , packet1.payload_type , packet1.chunk_index , packet1.chunk_count , packet1.payload_len , packet1.payload );
    mavlink_msg_rtls_command_response_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RTLS_COMMAND_RESPONSE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RTLS_COMMAND_RESPONSE) != NULL);
#endif
}

static void mavlink_test_rtlslink(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_param_ext_request_read(system_id, component_id, last_msg);
    mavlink_test_param_ext_request_list(system_id, component_id, last_msg);
    mavlink_test_param_ext_value(system_id, component_id, last_msg);
    mavlink_test_param_ext_set(system_id, component_id, last_msg);
    mavlink_test_param_ext_ack(system_id, component_id, last_msg);
    mavlink_test_rtls_device_status(system_id, component_id, last_msg);
    mavlink_test_rtls_command(system_id, component_id, last_msg);
    mavlink_test_rtls_command_response(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // RTLSLINK_TESTSUITE_H
