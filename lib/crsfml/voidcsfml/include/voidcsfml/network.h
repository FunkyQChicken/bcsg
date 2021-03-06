#ifndef VOIDCSFML_NETWORK_H
#define VOIDCSFML_NETWORK_H
#include <voidcsfml/system.h>
#include <voidcsfml/config.h>
VOIDCSFML_API sfml_network_version(int*, int*, int*);
VOIDCSFML_API sfml_socket_allocate(void** result);
VOIDCSFML_API sfml_socket_free(void* self);
VOIDCSFML_API sfml_socket_finalize(void* self);
VOIDCSFML_API sfml_socket_setblocking_GZq(void* self, unsigned char blocking);
VOIDCSFML_API sfml_socket_isblocking(void* self, unsigned char* result);
VOIDCSFML_API sfml_tcpsocket_allocate(void** result);
VOIDCSFML_API sfml_tcpsocket_finalize(void* self);
VOIDCSFML_API sfml_tcpsocket_free(void* self);
VOIDCSFML_API sfml_tcpsocket_initialize(void* self);
VOIDCSFML_API sfml_tcpsocket_getlocalport(void* self, unsigned short* result);
VOIDCSFML_API sfml_tcpsocket_getremoteaddress(void* self, void* result);
VOIDCSFML_API sfml_tcpsocket_getremoteport(void* self, unsigned short* result);
VOIDCSFML_API sfml_tcpsocket_connect_BfEbxif4T(void* self, void* remote_address, unsigned short remote_port, void* timeout, int* result);
VOIDCSFML_API sfml_tcpsocket_disconnect(void* self);
VOIDCSFML_API sfml_tcpsocket_send_5h8vgv(void* self, void* data, size_t size, int* result);
VOIDCSFML_API sfml_tcpsocket_send_5h8vgvi49(void* self, void* data, size_t size, size_t* sent, int* result);
VOIDCSFML_API sfml_tcpsocket_receive_xALvgvi49(void* self, void* data, size_t size, size_t* received, int* result);
VOIDCSFML_API sfml_tcpsocket_send_jyF(void* self, void* packet, int* result);
VOIDCSFML_API sfml_tcpsocket_receive_jyF(void* self, void* packet, int* result);
VOIDCSFML_API sfml_tcpsocket_setblocking_GZq(void* self, unsigned char blocking);
VOIDCSFML_API sfml_tcpsocket_isblocking(void* self, unsigned char* result);
VOIDCSFML_API sfml_ftp_allocate(void** result);
VOIDCSFML_API sfml_ftp_initialize(void* self);
VOIDCSFML_API sfml_ftp_free(void* self);
VOIDCSFML_API sfml_ftp_response_allocate(void** result);
VOIDCSFML_API sfml_ftp_response_finalize(void* self);
VOIDCSFML_API sfml_ftp_response_free(void* self);
VOIDCSFML_API sfml_ftp_response_initialize_nyWzkC(void* self, int code, size_t message_size, char* message);
VOIDCSFML_API sfml_ftp_response_isok(void* self, unsigned char* result);
VOIDCSFML_API sfml_ftp_response_getstatus(void* self, int* result);
VOIDCSFML_API sfml_ftp_response_getmessage(void* self, char** result);
VOIDCSFML_API sfml_ftp_response_initialize_lXv(void* self, void* copy);
VOIDCSFML_API sfml_ftp_directoryresponse_allocate(void** result);
VOIDCSFML_API sfml_ftp_directoryresponse_finalize(void* self);
VOIDCSFML_API sfml_ftp_directoryresponse_free(void* self);
VOIDCSFML_API sfml_ftp_directoryresponse_initialize_lXv(void* self, void* response);
VOIDCSFML_API sfml_ftp_directoryresponse_getdirectory(void* self, char** result);
VOIDCSFML_API sfml_ftp_directoryresponse_isok(void* self, unsigned char* result);
VOIDCSFML_API sfml_ftp_directoryresponse_getstatus(void* self, int* result);
VOIDCSFML_API sfml_ftp_directoryresponse_getmessage(void* self, char** result);
VOIDCSFML_API sfml_ftp_directoryresponse_initialize_Zyp(void* self, void* copy);
VOIDCSFML_API sfml_ftp_listingresponse_allocate(void** result);
VOIDCSFML_API sfml_ftp_listingresponse_finalize(void* self);
VOIDCSFML_API sfml_ftp_listingresponse_free(void* self);
VOIDCSFML_API sfml_ftp_listingresponse_initialize_lXvzkC(void* self, void* response, size_t data_size, char* data);
VOIDCSFML_API sfml_ftp_listingresponse_getlisting(void* self, char*** result, size_t* result_size);
VOIDCSFML_API sfml_ftp_listingresponse_isok(void* self, unsigned char* result);
VOIDCSFML_API sfml_ftp_listingresponse_getstatus(void* self, int* result);
VOIDCSFML_API sfml_ftp_listingresponse_getmessage(void* self, char** result);
VOIDCSFML_API sfml_ftp_listingresponse_initialize_2ho(void* self, void* copy);
VOIDCSFML_API sfml_ftp_finalize(void* self);
VOIDCSFML_API sfml_ftp_connect_BfEbxif4T(void* self, void* server, unsigned short port, void* timeout, void* result);
VOIDCSFML_API sfml_ftp_disconnect(void* self, void* result);
VOIDCSFML_API sfml_ftp_login(void* self, void* result);
VOIDCSFML_API sfml_ftp_login_zkCzkC(void* self, size_t name_size, char* name, size_t password_size, char* password, void* result);
VOIDCSFML_API sfml_ftp_keepalive(void* self, void* result);
VOIDCSFML_API sfml_ftp_getworkingdirectory(void* self, void* result);
VOIDCSFML_API sfml_ftp_getdirectorylisting_zkC(void* self, size_t directory_size, char* directory, void* result);
VOIDCSFML_API sfml_ftp_changedirectory_zkC(void* self, size_t directory_size, char* directory, void* result);
VOIDCSFML_API sfml_ftp_parentdirectory(void* self, void* result);
VOIDCSFML_API sfml_ftp_createdirectory_zkC(void* self, size_t name_size, char* name, void* result);
VOIDCSFML_API sfml_ftp_deletedirectory_zkC(void* self, size_t name_size, char* name, void* result);
VOIDCSFML_API sfml_ftp_renamefile_zkCzkC(void* self, size_t file_size, char* file, size_t new_name_size, char* new_name, void* result);
VOIDCSFML_API sfml_ftp_deletefile_zkC(void* self, size_t name_size, char* name, void* result);
VOIDCSFML_API sfml_ftp_download_zkCzkCJP8(void* self, size_t remote_file_size, char* remote_file, size_t local_path_size, char* local_path, int mode, void* result);
VOIDCSFML_API sfml_ftp_upload_zkCzkCJP8(void* self, size_t local_file_size, char* local_file, size_t remote_path_size, char* remote_path, int mode, void* result);
VOIDCSFML_API sfml_ftp_sendcommand_zkCzkC(void* self, size_t command_size, char* command, size_t parameter_size, char* parameter, void* result);
VOIDCSFML_API sfml_ipaddress_allocate(void** result);
VOIDCSFML_API sfml_ipaddress_free(void* self);
VOIDCSFML_API sfml_ipaddress_initialize(void* self);
VOIDCSFML_API sfml_ipaddress_initialize_zkC(void* self, size_t address_size, char* address);
VOIDCSFML_API sfml_ipaddress_initialize_Yy6(void* self, char* address);
VOIDCSFML_API sfml_ipaddress_initialize_9yU9yU9yU9yU(void* self, uint8_t byte0, uint8_t byte1, uint8_t byte2, uint8_t byte3);
VOIDCSFML_API sfml_ipaddress_initialize_saL(void* self, uint32_t address);
VOIDCSFML_API sfml_ipaddress_tostring(void* self, char** result);
VOIDCSFML_API sfml_ipaddress_tointeger(void* self, uint32_t* result);
VOIDCSFML_API sfml_ipaddress_getlocaladdress(void* result);
VOIDCSFML_API sfml_ipaddress_getpublicaddress_f4T(void* timeout, void* result);
VOIDCSFML_API sfml_operator_eq_BfEBfE(void* left, void* right, unsigned char* result);
VOIDCSFML_API sfml_operator_ne_BfEBfE(void* left, void* right, unsigned char* result);
VOIDCSFML_API sfml_operator_lt_BfEBfE(void* left, void* right, unsigned char* result);
VOIDCSFML_API sfml_operator_gt_BfEBfE(void* left, void* right, unsigned char* result);
VOIDCSFML_API sfml_operator_le_BfEBfE(void* left, void* right, unsigned char* result);
VOIDCSFML_API sfml_operator_ge_BfEBfE(void* left, void* right, unsigned char* result);
VOIDCSFML_API sfml_ipaddress_initialize_BfE(void* self, void* copy);
VOIDCSFML_API sfml_http_allocate(void** result);
VOIDCSFML_API sfml_http_finalize(void* self);
VOIDCSFML_API sfml_http_free(void* self);
VOIDCSFML_API sfml_http_request_allocate(void** result);
VOIDCSFML_API sfml_http_request_finalize(void* self);
VOIDCSFML_API sfml_http_request_free(void* self);
VOIDCSFML_API sfml_http_request_initialize_zkC1ctzkC(void* self, size_t uri_size, char* uri, int method, size_t body_size, char* body);
VOIDCSFML_API sfml_http_request_setfield_zkCzkC(void* self, size_t field_size, char* field, size_t value_size, char* value);
VOIDCSFML_API sfml_http_request_setmethod_1ct(void* self, int method);
VOIDCSFML_API sfml_http_request_seturi_zkC(void* self, size_t uri_size, char* uri);
VOIDCSFML_API sfml_http_request_sethttpversion_emSemS(void* self, unsigned int major, unsigned int minor);
VOIDCSFML_API sfml_http_request_setbody_zkC(void* self, size_t body_size, char* body);
VOIDCSFML_API sfml_http_request_initialize_Jat(void* self, void* copy);
VOIDCSFML_API sfml_http_response_allocate(void** result);
VOIDCSFML_API sfml_http_response_finalize(void* self);
VOIDCSFML_API sfml_http_response_free(void* self);
VOIDCSFML_API sfml_http_response_initialize(void* self);
VOIDCSFML_API sfml_http_response_getfield_zkC(void* self, size_t field_size, char* field, char** result);
VOIDCSFML_API sfml_http_response_getstatus(void* self, int* result);
VOIDCSFML_API sfml_http_response_getmajorhttpversion(void* self, unsigned int* result);
VOIDCSFML_API sfml_http_response_getminorhttpversion(void* self, unsigned int* result);
VOIDCSFML_API sfml_http_response_getbody(void* self, char** result);
VOIDCSFML_API sfml_http_response_initialize_N50(void* self, void* copy);
VOIDCSFML_API sfml_http_initialize(void* self);
VOIDCSFML_API sfml_http_initialize_zkCbxi(void* self, size_t host_size, char* host, unsigned short port);
VOIDCSFML_API sfml_http_sethost_zkCbxi(void* self, size_t host_size, char* host, unsigned short port);
VOIDCSFML_API sfml_http_sendrequest_Jatf4T(void* self, void* request, void* timeout, void* result);
VOIDCSFML_API sfml_packet_allocate(void** result);
VOIDCSFML_API sfml_packet_free(void* self);
VOIDCSFML_API sfml_packet_initialize(void* self);
VOIDCSFML_API sfml_packet_finalize(void* self);
VOIDCSFML_API sfml_packet_append_5h8vgv(void* self, void* data, size_t size_in_bytes);
VOIDCSFML_API sfml_packet_clear(void* self);
VOIDCSFML_API sfml_packet_getdata(void* self, void** result);
VOIDCSFML_API sfml_packet_getdatasize(void* self, size_t* result);
VOIDCSFML_API sfml_packet_endofpacket(void* self, unsigned char* result);
VOIDCSFML_API sfml_packet_operator_bool(void* self, unsigned char* result);
VOIDCSFML_API sfml_packet_operator_shr_gRY(void* self, unsigned char* data);
VOIDCSFML_API sfml_packet_operator_shr_0y9(void* self, int8_t* data);
VOIDCSFML_API sfml_packet_operator_shr_8hc(void* self, uint8_t* data);
VOIDCSFML_API sfml_packet_operator_shr_4k3(void* self, int16_t* data);
VOIDCSFML_API sfml_packet_operator_shr_Xag(void* self, uint16_t* data);
VOIDCSFML_API sfml_packet_operator_shr_NiZ(void* self, int32_t* data);
VOIDCSFML_API sfml_packet_operator_shr_qTz(void* self, uint32_t* data);
VOIDCSFML_API sfml_packet_operator_shr_BuW(void* self, int64_t* data);
VOIDCSFML_API sfml_packet_operator_shr_7H7(void* self, uint64_t* data);
VOIDCSFML_API sfml_packet_operator_shr_ATF(void* self, float* data);
VOIDCSFML_API sfml_packet_operator_shr_nIp(void* self, double* data);
VOIDCSFML_API sfml_packet_operator_shr_GHF(void* self, char** data);
VOIDCSFML_API sfml_packet_operator_shl_GZq(void* self, unsigned char data);
VOIDCSFML_API sfml_packet_operator_shl_k6g(void* self, int8_t data);
VOIDCSFML_API sfml_packet_operator_shl_9yU(void* self, uint8_t data);
VOIDCSFML_API sfml_packet_operator_shl_yAA(void* self, int16_t data);
VOIDCSFML_API sfml_packet_operator_shl_BtU(void* self, uint16_t data);
VOIDCSFML_API sfml_packet_operator_shl_qe2(void* self, int32_t data);
VOIDCSFML_API sfml_packet_operator_shl_saL(void* self, uint32_t data);
VOIDCSFML_API sfml_packet_operator_shl_G4x(void* self, int64_t data);
VOIDCSFML_API sfml_packet_operator_shl_Jvt(void* self, uint64_t data);
VOIDCSFML_API sfml_packet_operator_shl_Bw9(void* self, float data);
VOIDCSFML_API sfml_packet_operator_shl_mYt(void* self, double data);
VOIDCSFML_API sfml_packet_operator_shl_zkC(void* self, size_t data_size, char* data);
VOIDCSFML_API sfml_packet_initialize_54U(void* self, void* copy);
VOIDCSFML_API sfml_socketselector_allocate(void** result);
VOIDCSFML_API sfml_socketselector_free(void* self);
VOIDCSFML_API sfml_socketselector_initialize(void* self);
VOIDCSFML_API sfml_socketselector_finalize(void* self);
VOIDCSFML_API sfml_socketselector_add_JTp(void* self, void* socket);
VOIDCSFML_API sfml_socketselector_remove_JTp(void* self, void* socket);
VOIDCSFML_API sfml_socketselector_clear(void* self);
VOIDCSFML_API sfml_socketselector_wait_f4T(void* self, void* timeout, unsigned char* result);
VOIDCSFML_API sfml_socketselector_isready_JTp(void* self, void* socket, unsigned char* result);
VOIDCSFML_API sfml_socketselector_initialize_fWq(void* self, void* copy);
VOIDCSFML_API sfml_tcplistener_allocate(void** result);
VOIDCSFML_API sfml_tcplistener_finalize(void* self);
VOIDCSFML_API sfml_tcplistener_free(void* self);
VOIDCSFML_API sfml_tcplistener_initialize(void* self);
VOIDCSFML_API sfml_tcplistener_getlocalport(void* self, unsigned short* result);
VOIDCSFML_API sfml_tcplistener_listen_bxiBfE(void* self, unsigned short port, void* address, int* result);
VOIDCSFML_API sfml_tcplistener_close(void* self);
VOIDCSFML_API sfml_tcplistener_accept_WsF(void* self, void* socket, int* result);
VOIDCSFML_API sfml_tcplistener_setblocking_GZq(void* self, unsigned char blocking);
VOIDCSFML_API sfml_tcplistener_isblocking(void* self, unsigned char* result);
VOIDCSFML_API sfml_udpsocket_allocate(void** result);
VOIDCSFML_API sfml_udpsocket_finalize(void* self);
VOIDCSFML_API sfml_udpsocket_free(void* self);
VOIDCSFML_API sfml_udpsocket_initialize(void* self);
VOIDCSFML_API sfml_udpsocket_getlocalport(void* self, unsigned short* result);
VOIDCSFML_API sfml_udpsocket_bind_bxiBfE(void* self, unsigned short port, void* address, int* result);
VOIDCSFML_API sfml_udpsocket_unbind(void* self);
VOIDCSFML_API sfml_udpsocket_send_5h8vgvBfEbxi(void* self, void* data, size_t size, void* remote_address, unsigned short remote_port, int* result);
VOIDCSFML_API sfml_udpsocket_receive_xALvgvi499ylYII(void* self, void* data, size_t size, size_t* received, void* remote_address, unsigned short* remote_port, int* result);
VOIDCSFML_API sfml_udpsocket_send_jyFBfEbxi(void* self, void* packet, void* remote_address, unsigned short remote_port, int* result);
VOIDCSFML_API sfml_udpsocket_receive_jyF9ylYII(void* self, void* packet, void* remote_address, unsigned short* remote_port, int* result);
VOIDCSFML_API sfml_udpsocket_setblocking_GZq(void* self, unsigned char blocking);
VOIDCSFML_API sfml_udpsocket_isblocking(void* self, unsigned char* result);
#endif
