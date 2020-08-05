/* Слой работы с пакетом, симуляция структуры sk_buff, только необходимое для задачи */
#include <stdio.h>
#include <stdlib.h>
#include "skbuff.h"

#define ETHERNET_HEADER_LEN 14
#define IPV4_HEADER_LEN 20

// You SHOULD process errors (-1)
// returns offset from skb.data to data after tcp header
int skb_tcp_doff(struct sk_buff *skb) {
	const int doff_offset = 0xC;
	unsigned int tcp_doff = (*(skb->data + IPV4_HEADER_LEN + doff_offset) >> 4);
	if (tcp_doff < 5 || tcp_doff > 15)
		return -1;
	return IPV4_HEADER_LEN + tcp_doff * 4;
}

/* converts packet dump saved into unsigned char[] to something alike struct skbuff from kernel */
struct sk_buff *read_skb(unsigned char *raw_packet, size_t len) {
	struct sk_buff *skb = malloc(sizeof(struct sk_buff));
	skb->raw = raw_packet;
	skb->data = raw_packet + ETHERNET_HEADER_LEN;
	skb->len = len;
	return skb;
}


