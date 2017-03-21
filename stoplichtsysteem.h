#ifndef STOPLICHTSYSTEEM_H
#define STOPLICHTSYSTEEM_H

#include "stoplicht.h"

class StoplichtSysteem
{
    Stoplicht stoplichtSABU;
    Stoplicht stoplichtSABI;
    Stoplicht stoplichtSOBU;
    Stoplicht stoplichtSOBI;
    Stoplicht stoplichten[4];
public:
    StoplichtSysteem();
    Stoplicht* getStoplicht(int i);
};

#endif // STOPLICHTSYSTEEM_H
