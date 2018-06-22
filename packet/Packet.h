//
// Created by paloma on 21-06-18.
//

#include <iostream>
#include <string>
#include <stdlib.h>


# include "AbstractPacket.h"

using namespace std;

#ifndef CC5303_MESSAGE_H
#define CC5303_MESSAGE_H


class Packet: public AbstractPacket{


private:
    bool partitioned;
    unsigned int part_id;

public:
    Packet(string, string, string, bool , unsigned int);
    ~Packet();

    void setMsg(const string &msg);

    const string &getReceiver_ip() const;
    const string &getSender_ip() const;


    void setReceiver_ip(const string &receiver_ip);
    void setSender_ip(const string &sender_ip);

    bool isPartitioned() const;
    unsigned int getPart_id() const;
    void setPartitioned(bool partitioned);
    void setPart_id(unsigned int part_id);


};


#endif //CC5303_MESSAGE_H
