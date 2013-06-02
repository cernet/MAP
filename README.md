MAP
=======


MAP is an open source implementation of draft-ietf-softwire-map and
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
   O--+---------------O
   |  |  MAP CE       |
   | +-----+--------+ |
   | NAPT44|  MAP   | |
   | +-----+      | | |\    ,--------,                       .~------.
   |       +--------+ | \ ,'          '.                    '         `-.
   O------------------O  /              \   O---------O    /             \
                        |   IPv6 only    |  |   MAP   |   /    Public     \
                        |    Network     |--+  Border +- (       IPv4      )
                        |  (MAP Domain)  |  |  Relay  |   \    Network    /
   O------------------O  \              /   O---------O    \             /
   |    MAP   CE      |  /".          ,'                    `.         ,'
   | +-----+--------+ | /   `----+--'`                         '------'
   | NAPT44|  MAP   | |/
   | +-----+        | |
   |   |   +--------+ |
   O---.--------------O
       |
        User M
      Private IPv4
        Network

