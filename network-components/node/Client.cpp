//
// Created by paloma on 21-06-18.
//

#include "Client.h"

Client::Client(string ip, string name) {

    Node(ip, name);
    this->link = new Client2Router();
}

Packet Client::receive_msg() {
    Packet packet = this->link.get_packet();
    return packet;
}

void Client::send_msg(Packet packet) {

    this->link.send_packet(packet);
}

void Client::setLink(const Client2Router &link) {
    Client::link = link;
}

const Client2Router &Client::getLink() const {
    return link;
}
