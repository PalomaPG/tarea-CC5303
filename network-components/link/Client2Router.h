//
// Created by paloma on 21-06-18.
//

#ifndef CC5303_CLIENT2ROUTER_H
#define CC5303_CLIENT2ROUTER_H

#include "Link.h"
#include "../node/Node.h"

class Client2Router : public Link {

public:
    Client2Router();
    Client2Router(Node node);
    Packet* get_packet();
    void send_packet(Packet packet);

};


#endif //CC5303_CLIENT2ROUTER_H
