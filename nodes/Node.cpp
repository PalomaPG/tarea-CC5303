//
// Created by paloma on 21-06-18.
//

#include "Node.h"
Node::Node(string name, string ip): ip(ip), name(name) {

}

const string &Node::getIp() const {
    return ip;
}

void Node::setIp(const string &ip) {
    Node::ip = ip;
}

const string &Node::getName() const {
    return name;
}

void Node::setName(const string &name) {
    Node::name = name;
}
