MAP
=======


MAP is an open source CPE implementation of draft-ietf-softwire-map and
draft-ietf-softwire-map-t. It runs on Linux and Openwrt.

MAP is a mechanism for transporting IPv4 packets across an IPv6 network
using IP translation (MAP-T) or encapsulation (MAP-E), and a generic
mechanism for mapping between IPv6 addresses and IPv4 addresses and
transport layer ports. It is defined in
https://datatracker.ietf.org/doc/draft-ietf-softwire-map/ and
https://datatracker.ietf.org/doc/draft-ietf-softwire-map-t/


A typical MAP use case is shown in the Figure below.
   
                       User N
                    Private IPv4
                   |  Network
                   |
                o--+---------------O
                |  |  MAP CE       |
                | +-----+--------+ |
                | NAPT44|  MAP   | |
                | +-----+      | | |\    ,--------,                        ,~-----------,
                |       +--------+ | \ ,'          '.                    ,'              `,
                O------------------O  /              \   O---------O    /                  \   
                                     |   IPv6 only    |  |   MAP   |   /       Public       \
                                     |    Network     |--+  Border +- (         IPv4         )
                                     |  (MAP Domain)  |  |  Relay  |   \       Network      /
                O------------------O  \              /   O---------O    \                  /
                |    MAP   CE      |  /".          ,'                    `.              ,'
                | +-----+--------+ | /   `----+--'`                         '-----------'
                | NAPT44|  MAP   | |/
                | +-----+        | |
                |   |   +--------+ |
                O---.--------------O
                    |
                     User M
                  Private IPv4
                    Network

### Interoperation and Backwards Compatibility

This implementation is used on MAP CE and can be configured with/without NAPT44 function. 
The interoperation between this implementation and Cisco ASR 1K/9K has been tested 
successfully with either encapsulation mode or translation mode.
See http://blogs.cisco.com/sp/real-world-demonstration-of-map-for-ipv6/ for more details.

Moreover, we have tested the CE implementation in CERNET/CERNET2 environment and the result
shows that a unified MAP CE can be configured to support MAP-T, MAP-E, mixed MAP-T/MAP-E, 
and backward compatible with stateless NAT64, stateful NAT64 and dual-stack lite. Please refer to
http://datatracker.ietf.org/doc/draft-xli-softwire-map-testing for further reading.

