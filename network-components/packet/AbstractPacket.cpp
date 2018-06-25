//
// Created by paloma on 21-06-18.
//

#include "AbstractPacket.h"

const string &AbstractPacket::getMsg() const {
    return msg;
}

unsigned int AbstractPacket::getId() const {
    return id;
}

const string &AbstractPacket::getReceiver_ip() const {
    return receiver_ip;
}

const string &AbstractPacket::getSender_ip() const {
    return sender_ip;
}


void AbstractPacket::setMsg(const string &msg) {
    AbstractPacket::msg = msg;
}

void AbstractPacket::setId(unsigned int id) {
    AbstractPacket::id = id;
}

void AbstractPacket::setReceiver_ip(const string &receiver_ip) {
    AbstractPacket::receiver_ip = receiver_ip;
}

void AbstractPacket::setSender_ip(const string &sender_ip) {
    AbstractPacket::sender_ip = sender_ip;
}

AbstractPacket::AbstractPacket(const string &msg, unsigned int id, const string &receiver_ip, const string &sender_ip)
        : msg(msg), id(id), receiver_ip(receiver_ip), sender_ip(sender_ip) {}
