//
// Created by paloma on 21-06-18.
//

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#ifndef CC5303_MESSAGE_H
#define CC5303_MESSAGE_H


class Packet{


private:
    string msg;
    unsigned int id;
    string receiver_ip;
    string sender_ip;
    bool partitioned;
    unsigned int part_id;

public:
    Packet();
    Packet(string, string, string, bool , unsigned int);
    const string &getMsg() const;
    unsigned int getId() const;
    const string &getReceiver_ip() const;
    const string &getSender_ip() const;
    bool isPartitioned() const;
    unsigned int getPart_id() const;
    void setMsg(const string &msg);
    void setId(unsigned int id);
    void setReceiver_ip(const string &receiver_ip);
    void setSender_ip(const string &sender_ip);
    void setPartitioned(bool partitioned);
    void setPart_id(unsigned int part_id);
    ~Packet();


};


#endif //CC5303_MESSAGE_H
