#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>
#include "skbuff.h"
#include "sni.h"
#include "packets/client_hello.h"
#include "packets/client_hello_tcp32.h"
#include "packets/client_hello_ambigous_doff.h"
#include "packets/client_hello_tcp32_ambigous_doff.h"
#include "packets/not_client_hello.h"

#ifndef IPV4_HEADER_LEN
#define IPV4_HEADER_LEN 20
#endif

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
		if (doff == -1) {
			/* Типовые длины TCP-заголовков-79% (5 битовых слов) - проверим сперва их */
			unsigned int tcp_doff = 5;
			do {
				doff = IPV4_HEADER_LEN + tcp_doff * 4;
				/* Увеличим возможное значение длины TCP-заголовка */
				tcp_doff++;
				if (verify_ssl(skb->data + doff, skb->raw + skb->len) != NULL)
					return 1;
			} while (tcp_doff <= 15);
		}
	return verify_ssl(skb->data + doff, skb->raw + skb->len) != NULL;
}

int main()
{
	printf("# client_hello.h: ");
	if (snimatch_mt(client_hello, sizeof(client_hello)))
		printf(" OK\n");
	else {
		printf(" NOT FOUND\n");
	}

	printf("# client_hello_tcp32.h ");
	if (snimatch_mt(client_hello_tcp32, sizeof(client_hello_tcp32)))
		printf(" OK\n");
	else {
		printf(" NOT FOUND\n");
	}

	printf("# not_client_hello.h");
	if (snimatch_mt(not_client_hello, sizeof(not_client_hello)))
		printf(" OK\n");
	else {
		printf(" NOT FOUND\n");
	}

	printf("# client_hello_ambigous_doff.h ");
	if (snimatch_mt(client_hello_ambigous_doff, sizeof(client_hello_ambigous_doff)))
		printf(" OK\n");
	else {
		printf(" NOT FOUND\n");
	}

	/* Проверка "битого" пакета с другой длиной TCP заголовка */
	printf("# client_hello_tcp32_ambigous_doff.h ");
	if (snimatch_mt(client_hello_tcp32_ambigous_doff, sizeof(client_hello_tcp32_ambigous_doff)))
		printf(" OK\n");
	else {
		printf(" NOT FOUND\n");
	}
	return 0;
}
