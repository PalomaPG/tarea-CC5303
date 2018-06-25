//
// Created by paloma on 21-06-18.
//

#include "AbstractPacket.h"

#ifndef CC5303_CONFIRMATION_H
#define CC5303_CONFIRMATION_H


class ACKPacket : public AbstractPacket {
public:
    void setId(unsigned int id);
    void setMsg(const string &msg);
};


#endif //CC5303_CONFIRMATION_H
