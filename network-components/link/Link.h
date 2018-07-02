//
// Created by paloma on 21-06-18.
//

#ifndef CC5303_LINK_H
#define CC5303_LINK_H

#include "../node/Node.h"

class Link {

private:
    Node node;
    int MTU;
    int delay;
public:
    Link();
    Link(const Node &node, int MTU, int delay);
    virtual Packet* get_packet();
    virtual void send_packet(Packet packet);

};


#endif //CC5303_LINK_H
