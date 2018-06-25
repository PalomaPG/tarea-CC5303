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

    AbstractPacket(const string &msg, unsigned int id, const string &receiver_ip, const string &sender_ip);

    virtual void setId(unsigned int id);
    virtual void setMsg(const string &msg);

    const string &getMsg() const;
    unsigned int getId() const;
    const string &getReceiver_ip() const;
    const string &getSender_ip() const;
    void setReceiver_ip(const string &receiver_ip);
    void setSender_ip(const string &sender_ip);


};


#endif //CC5303_ABSTRACTPACKET_H
