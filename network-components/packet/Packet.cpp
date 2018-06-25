//
// Created by paloma on 21-06-18.
//

#include "Packet.h"


Packet::Packet(string msg, string receiver_ip, string sender_ip, bool partitoned, unsigned int part_id):
       partitioned(partitoned), part_id(part_id){

    AbstractPacket();
    this->setId(rand());

}

bool Packet::isPartitioned() const {
    return partitioned;
}

unsigned int Packet::getPart_id() const {
    return part_id;
}

void Packet::setPartitioned(bool partitioned) {
    Packet::partitioned = partitioned;
}

void Packet::setPart_id(unsigned int part_id) {
    Packet::part_id = part_id;
}