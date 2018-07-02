#include <iostream>

#define RECEIVER_IP "198.123.122.123"
#define SENDER_IP "198.123.122.13"

#include "network-components/node/Client.h"
int main() {
    Client *c1 = new  Client(SENDER_IP, "c1");

    return 1;
}