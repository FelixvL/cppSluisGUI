#include "sluissysteem.h"

SluisSysteem::SluisSysteem()
{
    getal = 15;
}
StoplichtSysteem* SluisSysteem::getStoplichtSysteem(){
    return &stoplichtSysteem;
}

