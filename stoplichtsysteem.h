#ifndef STOPLICHTSYSTEEM_H
#define STOPLICHTSYSTEEM_H

#include "stoplicht.h"

class StoplichtSysteem
{
    Stoplicht stoplichtSABU;
    Stoplicht stoplichtSABI;
    Stoplicht stoplichtSOBU;
    Stoplicht stoplichtSOBI;
public:
    StoplichtSysteem();
    Stoplicht* getStoplicht();
};

#endif // STOPLICHTSYSTEEM_H
