#ifndef SLUISSYSTEEM_H
#define SLUISSYSTEEM_H

#include "stoplichtsysteem.h"

class SluisSysteem
{
    StoplichtSysteem stoplichtSysteem;
public:
    int getal = 6;
    SluisSysteem();
    StoplichtSysteem* getStoplichtSysteem();
};

#endif // SLUISSYSTEEM_H
