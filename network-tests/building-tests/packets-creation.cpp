//
// Created by paloma on 24-06-18.
//

#include "node/Client.h"
#include "packet/AbstractPacket.h"
#include "packet/Packet.h"
#include "packet/ACKPacket.h"


#define RECEIVER_IP "198.123.122.123"
#define SENDER_IP "198.123.122.13"


#include "packets-creation.h"

class BuildingPackets : public ::testing::Test{

protected:
    void SetUp(){
        Client *c1 = new  Client(SENDER_IP, "c1");

    }
};