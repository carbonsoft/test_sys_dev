#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>
#include "skbuff.h"
#include "sni.h"
#include "packets/client_hello.h"
#include "packets/client_hello_tcp32.h"
#include "packets/client_hello_ambigous_doff.h"
#include "packets/not_client_hello.h"

/*
Нельзя просто взять и искать SSL_CONTENT_TYPE_HANDSHAKE (0x16) в пакете,
он там окажется с вероятностью 256/длина_пакета.
SSL_CONTENT_TYPE должен располагаться строго после TCP-заголовка.
Но где он заканчивается, если пакеты приходят с полем tcp->doff = 0?
*/

bool snimatch_mt(unsigned char *pkt, size_t len)
{
	struct sk_buff *skb = read_skb(pkt, len);
	int doff = skb_tcp_doff(skb);
	return verify_ssl(skb->data + doff, skb->raw + skb->len) != NULL;
}

int main()
{
	printf("# client_hello.h: ");
	if (snimatch_mt(client_hello, sizeof(client_hello)))
		printf(" OK\n");
	else
		return 1;

	printf("# client_hello_tcp32.h");
	if (snimatch_mt(client_hello_tcp32, sizeof(client_hello_tcp32)))
		printf(" OK\n");
	else
		return 1;

	printf("# not_client_hello.h");
	if (!snimatch_mt(not_client_hello, sizeof(not_client_hello)))
		printf(" OK\n");
	else
		return 1;

	printf("# client_hello_ambigous_doff.h");
	if (snimatch_mt(client_hello_ambigous_doff, sizeof(client_hello_ambigous_doff)))
		printf(" OK\n");
	else
		return 1;
	return 0;
}
