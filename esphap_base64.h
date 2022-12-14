#pragma once

#include <stddef.h>
#include "port_x.h"
#ifdef ARDUINO8266_SERVER_CPP
#ifdef __cplusplus
extern "C" {
#endif
#endif
	size_t base64_encoded_size(const unsigned char* data, size_t size);
	size_t esphap_base64_decoded_size(const unsigned char* encoded_data, size_t encoded_size);

	int base64_encode(const unsigned char* data, size_t data_size, unsigned char *encoded_data);
	int esphap_base64_decode(const unsigned char* encoded_data, size_t encoded_size, unsigned char *data);

#include "port_x.h"
#ifdef ARDUINO8266_SERVER_CPP
#ifdef __cplusplus
} //extern C
#endif
#endif