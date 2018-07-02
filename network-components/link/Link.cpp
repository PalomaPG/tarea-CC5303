//
// Created by paloma on 21-06-18.
//

#include "Link.h"
Link::Link() {}

Link::Link(const Node &node, int MTU, int delay) : node(node), MTU(MTU), delay(delay) {}
