//
// Created by paloma on 21-06-18.
//

#include <iostream>
#include <string>

using namespace std;

#ifndef CC5303_NODE_H
#define CC5303_NODE_H


class Node {

    public:
        string receive_msg();
        void send_msg(string msg);
};


#endif //CC5303_NODE_H
