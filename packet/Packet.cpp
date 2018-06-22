//
// Created by paloma on 21-06-18.
//

#include "Packet.h"
Packet::Packet() = default;


Packet::Packet(string msg, string receiver_ip, string sender_ip, bool partitoned, unsigned int part_id):
       partitioned(partitoned), part_id(part_id){

    this->id = rand();

}

const string &Packet::getMsg() const {
    return msg;
}

unsigned int Packet::getId() const {
    return id;
}

const string &Packet::getReceiver_ip() const {
    return receiver_ip;
}

const string &Packet::getSender_ip() const {
    return sender_ip;
}

bool Packet::isPartitioned() const {
    return partitioned;
}

unsigned int Packet::getPart_id() const {
    return part_id;
}

void Packet::setMsg(const string &msg) {
    Packet::msg = msg;
}

void Packet::setId(unsigned int id) {
    Packet::id = id;
}

void Packet::setReceiver_ip(const string &receiver_ip) {
    Packet::receiver_ip = receiver_ip;
}

void Packet::setSender_ip(const string &sender_ip) {
    Packet::sender_ip = sender_ip;
}

void Packet::setPartitioned(bool partitioned) {
    Packet::partitioned = partitioned;
}

void Packet::setPart_id(unsigned int part_id) {
    Packet::part_id = part_id;
}
