#ifndef _SKBUFF_H
#define _SKBUFF_H

#define ETHERNET_HEADER_LEN 14

struct sk_buff {
	unsigned char *raw;  // everything
	unsigned char *data;  // everything except ethernet header
	size_t len; // raw -> end
};

int skb_tcp_doff(struct sk_buff *skb);
struct sk_buff *read_skb(unsigned char *raw_packet, size_t len);
#endif
