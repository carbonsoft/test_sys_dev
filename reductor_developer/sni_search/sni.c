/* Как бы слой работы с SSL, ограничимся тем, что проверим что это ClientHello пакет */

#include <stdio.h>
#include "sni.h"
#define SSL_CONTENT_TYPE_HANDSHAKE 0x16

unsigned char *verify_ssl(unsigned char *haystack, unsigned char *pkt_end)
{
	unsigned char *c = haystack;
	if (*c != SSL_CONTENT_TYPE_HANDSHAKE) {
		return NULL;
	}
	return c;
}
