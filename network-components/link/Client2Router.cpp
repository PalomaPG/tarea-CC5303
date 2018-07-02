//
// Created by paloma on 21-06-18.
//

#include "Client2Router.h"

Client2Router::Client2Router() {}
Client2Router::Client2Router(Node node) {
    Link(node, 512, 1);
}

Packet* Client2Router::get_packet() {
 return new Packet("", "", "", false, 1);
}

void Client2Router::send_packet(Packet packet) {

}