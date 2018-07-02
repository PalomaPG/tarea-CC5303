//
// Created by paloma on 21-06-18.
//

#include <iostream>
#include <string>

#include "../packet/Packet.h"
#include "../link/Link.h"

using namespace std;

#ifndef CC5303_NODE_H
#define CC5303_NODE_H


class Node {

    private:
        string name;
        string ip;

    public:
        Node();
        Node(string, string);
        ~Node();
        virtual Packet receive_msg();
        virtual void send_msg(Packet packet);
        const string &getIp() const;
        void setIp(const string &ip);
        const string &getName() const;
        void setName(const string &name);
};


#endif //CC5303_NODE_H
