//
// Created by paloma on 21-06-18.
//

#include <iostream>
#include <string>

using namespace std;

#ifndef CC5303_CLIENT_H
#define CC5303_CLIENT_H


class Client {

    public:
        void send_msg(string msg);
        string get_msg();


};


#endif //CC5303_CLIENT_H
