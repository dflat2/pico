#ifndef MESSAGING_H
#define MESSAGING_H

#include "CC_API/String.h"

void PlayerMessage(const char* message);
void Message_MessageOf(const char* message, int messageType);
void Message_BlocksAffected(int blocksAffected);

#endif /* MESSAGING_H */
