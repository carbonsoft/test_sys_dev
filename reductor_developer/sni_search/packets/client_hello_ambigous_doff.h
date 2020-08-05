#ifndef TEST_SYS_DEV_CLIENT_HELLO_AMBIGOUS_DOFF_H
#define TEST_SYS_DEV_CLIENT_HELLO_AMBIGOUS_DOFF_H
/*
Frame 5: 227 bytes on wire (1816 bits), 227 bytes captured (1816 bits) on interface 0
    Interface id: 0 (eth0.317)
    Encapsulation type: Ethernet (1)
    Arrival Time: Mar 16, 2017 16:43:32.464954762 YEKT
    [Time shift for this packet: 0.000000000 seconds]
    Epoch Time: 1489664612.464954762 seconds
    [Time delta from previous captured frame: 0.009938038 seconds]
    [Time delta from previous displayed frame: 0.009938038 seconds]
    [Time since reference or first frame: 7.131114759 seconds]
    Frame Number: 5
    Frame Length: 227 bytes (1816 bits)
    Capture Length: 227 bytes (1816 bits)
    [Frame is marked: False]
    [Frame is ignored: False]
    [Protocols in frame: eth:ethertype:ip:tcp:ssl]
Ethernet II, Src: 02:04:49:1d:17:b8 (02:04:49:1d:17:b8), Dst: 0c:c4:7a:74:df:32 (0c:c4:7a:74:df:32)
    Destination: 0c:c4:7a:74:df:32 (0c:c4:7a:74:df:32)
        Address: 0c:c4:7a:74:df:32 (0c:c4:7a:74:df:32)
        .... ..0. .... .... .... .... = LG bit: Globally unique address (factory default)
        .... ...0 .... .... .... .... = IG bit: Individual address (unicast)
    Source: 02:04:49:1d:17:b8 (02:04:49:1d:17:b8)
        Address: 02:04:49:1d:17:b8 (02:04:49:1d:17:b8)
        .... ..1. .... .... .... .... = LG bit: Locally administered address (this is NOT the factory default)
        .... ...0 .... .... .... .... = IG bit: Individual address (unicast)
    Type: IP (0x0800)
Internet Protocol Version 4, Src: 91.228.63.222 (91.228.63.222), Dst: 94.102.58.6 (94.102.58.6)
    Version: 4
    Header Length: 20 bytes
    Differentiated Services Field: 0x00 (DSCP 0x00: Default; ECN: 0x00: Not-ECT (Not ECN-Capable Transport))
        0000 00.. = Differentiated Services Codepoint: Default (0x00)
        .... ..00 = Explicit Congestion Notification: Not-ECT (Not ECN-Capable Transport) (0x00)
    Total Length: 213
    Identification: 0x3990 (14736)
    Flags: 0x02 (Don't Fragment)
        0... .... = Reserved bit: Not set
        .1.. .... = Don't fragment: Set
        ..0. .... = More fragments: Not set
    Fragment offset: 0
    Time to live: 125
    Protocol: TCP (6)
    Header checksum: 0x8f64 [validation disabled]
        [Good: False]
        [Bad: False]
    Source: 91.228.63.222 (91.228.63.222)
    Destination: 94.102.58.6 (94.102.58.6)
    [Source GeoIP: Unknown]
    [Destination GeoIP: Unknown]
Transmission Control Protocol, Src Port: 53018 (53018), Dst Port: 443 (443), Seq: 1, Ack: 1, Len: 173
    Source Port: 53018 (53018)
    Destination Port: 443 (443)
    [Stream index: 1]
    [TCP Segment Len: 173]
    Sequence number: 1    (relative sequence number)
    [Next sequence number: 174    (relative sequence number)]
    Acknowledgment number: 1    (relative ack number)
    Header Length: 20 bytes
    .... 0000 0001 1000 = Flags: 0x018 (PSH, ACK)
        000. .... .... = Reserved: Not set
        ...0 .... .... = Nonce: Not set
        .... 0... .... = Congestion Window Reduced (CWR): Not set
        .... .0.. .... = ECN-Echo: Not set
        .... ..0. .... = Urgent: Not set
        .... ...1 .... = Acknowledgment: Set
        .... .... 1... = Push: Set
        .... .... .0.. = Reset: Not set
        .... .... ..0. = Syn: Not set
        .... .... ...0 = Fin: Not set
    Window size value: 16560
    [Calculated window size: 66240]
    [Window size scaling factor: 4]
    Checksum: 0x3dbe [validation disabled]
        [Good Checksum: False]
        [Bad Checksum: False]
    Urgent pointer: 0
    [SEQ/ACK analysis]
        [iRTT: 0.064623704 seconds]
        [Bytes in flight: 173]
Secure Sockets Layer
    SSL Record Layer: Handshake Protocol: Client Hello
        Content Type: Handshake (22)
        Version: TLS 1.2 (0x0303)
        Length: 168
        Handshake Protocol: Client Hello
            Handshake Type: Client Hello (1)
            Length: 164
            Version: TLS 1.2 (0x0303)
            Random
                GMT Unix Time: Mar 16, 2017 16:43:36.000000000 YEKT
                Random Bytes: 88806e0b2e4ad584c95ea95f4597af30c997a4b80beec91b...
            Session ID Length: 0
            Cipher Suites Length: 48
            Cipher Suites (24 suites)
                Cipher Suite: TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384 (0xc028)
                Cipher Suite: TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256 (0xc027)
                Cipher Suite: TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA (0xc014)
                Cipher Suite: TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA (0xc013)
                Cipher Suite: TLS_DHE_RSA_WITH_AES_256_GCM_SHA384 (0x009f)
                Cipher Suite: TLS_DHE_RSA_WITH_AES_128_GCM_SHA256 (0x009e)
                Cipher Suite: TLS_RSA_WITH_AES_256_GCM_SHA384 (0x009d)
                Cipher Suite: TLS_RSA_WITH_AES_128_GCM_SHA256 (0x009c)
                Cipher Suite: TLS_RSA_WITH_AES_256_CBC_SHA256 (0x003d)
                Cipher Suite: TLS_RSA_WITH_AES_128_CBC_SHA256 (0x003c)
                Cipher Suite: TLS_RSA_WITH_AES_256_CBC_SHA (0x0035)
                Cipher Suite: TLS_RSA_WITH_AES_128_CBC_SHA (0x002f)
                Cipher Suite: TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384 (0xc02c)
                Cipher Suite: TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256 (0xc02b)
                Cipher Suite: TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384 (0xc024)
                Cipher Suite: TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256 (0xc023)
                Cipher Suite: TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA (0xc00a)
                Cipher Suite: TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA (0xc009)
                Cipher Suite: TLS_DHE_DSS_WITH_AES_256_CBC_SHA256 (0x006a)
                Cipher Suite: TLS_DHE_DSS_WITH_AES_128_CBC_SHA256 (0x0040)
                Cipher Suite: TLS_DHE_DSS_WITH_AES_256_CBC_SHA (0x0038)
                Cipher Suite: TLS_DHE_DSS_WITH_AES_128_CBC_SHA (0x0032)
                Cipher Suite: TLS_RSA_WITH_3DES_EDE_CBC_SHA (0x000a)
                Cipher Suite: TLS_DHE_DSS_WITH_3DES_EDE_CBC_SHA (0x0013)
            Compression Methods Length: 1
            Compression Methods (1 method)
                Compression Method: null (0)
            Extensions Length: 75
            Extension: server_name
                Type: server_name (0x0000)
                Length: 13
                Server Name Indication extension
                    Server Name list length: 11
                    Server Name Type: host_name (0)
                    Server Name length: 8
                    Server Name: 24wd.biz
            Extension: status_request
                Type: status_request (0x0005)
                Length: 5
                Certificate Status Type: OCSP (1)
                Responder ID list Length: 0
                Request Extensions Length: 0
            Extension: elliptic_curves
                Type: elliptic_curves (0x000a)
                Length: 6
                Elliptic Curves Length: 4
                Elliptic curves (2 curves)
                    Elliptic curve: secp256r1 (0x0017)
                    Elliptic curve: secp384r1 (0x0018)
            Extension: ec_point_formats
                Type: ec_point_formats (0x000b)
                Length: 2
                EC point formats Length: 1
                Elliptic curves point formats (1)
                    EC point format: uncompressed (0)
            Extension: signature_algorithms
                Type: signature_algorithms (0x000d)
                Length: 20
                Signature Hash Algorithms Length: 18
                Signature Hash Algorithms (9 algorithms)
                    Signature Hash Algorithm: 0x0601
                        Signature Hash Algorithm Hash: SHA512 (6)
                        Signature Hash Algorithm Signature: RSA (1)
                    Signature Hash Algorithm: 0x0603
                        Signature Hash Algorithm Hash: SHA512 (6)
                        Signature Hash Algorithm Signature: ECDSA (3)
                    Signature Hash Algorithm: 0x0401
                        Signature Hash Algorithm Hash: SHA256 (4)
                        Signature Hash Algorithm Signature: RSA (1)
                    Signature Hash Algorithm: 0x0501
                        Signature Hash Algorithm Hash: SHA384 (5)
                        Signature Hash Algorithm Signature: RSA (1)
                    Signature Hash Algorithm: 0x0201
                        Signature Hash Algorithm Hash: SHA1 (2)
                        Signature Hash Algorithm Signature: RSA (1)
                    Signature Hash Algorithm: 0x0403
                        Signature Hash Algorithm Hash: SHA256 (4)
                        Signature Hash Algorithm Signature: ECDSA (3)
                    Signature Hash Algorithm: 0x0503
                        Signature Hash Algorithm Hash: SHA384 (5)
                        Signature Hash Algorithm Signature: ECDSA (3)
                    Signature Hash Algorithm: 0x0203
                        Signature Hash Algorithm Hash: SHA1 (2)
                        Signature Hash Algorithm Signature: ECDSA (3)
                    Signature Hash Algorithm: 0x0202
                        Signature Hash Algorithm Hash: SHA1 (2)
                        Signature Hash Algorithm Signature: DSA (2)
            Extension: Unknown 23
                Type: Unknown (0x0017)
                Length: 0
                Data (0 bytes)
            Extension: renegotiation_info
                Type: renegotiation_info (0xff01)
                Length: 1
                Renegotiation Info extension
                    Renegotiation info extension length: 0
*/

unsigned char client_hello_ambigous_doff[] = {
	0x0c, 0xc4, 0x7a, 0x74, 0xdf, 0x32, 0x02, 0x04, 0x49, 0x1d, 0x17, 0xb8,
	0x08, 0x00, 0x45, 0x00, 0x00, 0xd5, 0x39, 0x90, 0x40, 0x00, 0x7d, 0x06,
	0x8f, 0x64, 0x5b, 0xe4, 0x3f, 0xde, 0x5e, 0x66, 0x3a, 0x06, 0xcf, 0x1a,
	0x01, 0xbb, 0x27, 0x13, 0xc1, 0xe0, 0x1e, 0xb0, 0x1f, 0xa2, /* внезапно TCP->doff = 0 */ 0x00, 0x18,
	0x40, 0xb0, 0x3d, 0xbe, 0x00, 0x00, 0x16, 0x03, 0x03, 0x00, 0xa8, 0x01,
	0x00, 0x00, 0xa4, 0x03, 0x03, 0x58, 0xca, 0x7a, 0x68, 0x88, 0x80, 0x6e,
	0x0b, 0x2e, 0x4a, 0xd5, 0x84, 0xc9, 0x5e, 0xa9, 0x5f, 0x45, 0x97, 0xaf,
	0x30, 0xc9, 0x97, 0xa4, 0xb8, 0x0b, 0xee, 0xc9, 0x1b, 0xa6, 0x25, 0x08,
	0xd5, 0x00, 0x00, 0x30, 0xc0, 0x28, 0xc0, 0x27, 0xc0, 0x14, 0xc0, 0x13,
	0x00, 0x9f, 0x00, 0x9e, 0x00, 0x9d, 0x00, 0x9c, 0x00, 0x3d, 0x00, 0x3c,
	0x00, 0x35, 0x00, 0x2f, 0xc0, 0x2c, 0xc0, 0x2b, 0xc0, 0x24, 0xc0, 0x23,
	0xc0, 0x0a, 0xc0, 0x09, 0x00, 0x6a, 0x00, 0x40, 0x00, 0x38, 0x00, 0x32,
	0x00, 0x0a, 0x00, 0x13, 0x01, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x0d,
	0x00, 0x0b, 0x00, 0x00, 0x08, 0x32, 0x34, 0x77, 0x64, 0x2e, 0x62, 0x69,
	0x7a, 0x00, 0x05, 0x00, 0x05, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a,
	0x00, 0x06, 0x00, 0x04, 0x00, 0x17, 0x00, 0x18, 0x00, 0x0b, 0x00, 0x02,
	0x01, 0x00, 0x00, 0x0d, 0x00, 0x14, 0x00, 0x12, 0x06, 0x01, 0x06, 0x03,
	0x04, 0x01, 0x05, 0x01, 0x02, 0x01, 0x04, 0x03, 0x05, 0x03, 0x02, 0x03,
	0x02, 0x02, 0x00, 0x17, 0x00, 0x00, 0xff, 0x01, 0x00, 0x01, 0x00,
};
#endif //TEST_SYS_DEV_CLIENT_HELLO_IE_H
