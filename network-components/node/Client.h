//
// Created by paloma on 21-06-18.
//

#include <iostream>
#include <string>

#include "Node.h"
#include "../link/Client2Router.h"

using namespace std;

#ifndef CC5303_CLIENT_H
#define CC5303_CLIENT_H


class Client : public Node{
private:
    Client2Router link;
public:
    const Client2Router &getLink() const;
    void setLink(const Client2Router &link);
    Client(string, string);
    Packet receive_msg();
    void send_msg(Packet packet);


};


#endif //CC5303_CLIENT_H
