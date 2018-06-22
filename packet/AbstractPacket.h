//
// Created by paloma on 21-06-18.
//

#include <iostream>
#include <string>

using namespace std;

#ifndef CC5303_ABSTRACTPACKET_H
#define CC5303_ABSTRACTPACKET_H


class AbstractPacket {

private:
    string msg;
    unsigned int id;
    string receiver_ip;
    string sender_ip;
public:
    AbstractPacket() = default;
    AbstractPacket(unsigned int, string, string);
    const string &getMsg() const;
    unsigned int getId() const;
    void setId(unsigned int id);


};


#endif //CC5303_ABSTRACTPACKET_H
