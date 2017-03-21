#include "stoplichtsysteem.h"

StoplichtSysteem::StoplichtSysteem()
{
     stoplichtSABU;
     stoplichtSABU.setId(0);
     stoplichtSABI;
     stoplichtSABI.setId(1);
     stoplichtSOBU;
     stoplichtSOBU.setId(2);
     stoplichtSOBI;
     stoplichtSOBI.setId(3);
}
Stoplicht* StoplichtSysteem::getStoplicht(int i){
    switch(i){
        case 0:
            return &stoplichtSABU;
        break;
        case 1:
            return &stoplichtSABI;
        break;
        case 2:
            return &stoplichtSOBU;
        break;
        case 3:
            return &stoplichtSOBI;
        break;
    }
}
