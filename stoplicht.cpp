#include "stoplicht.h"

Stoplicht::Stoplicht()
{
    isRood = true;
}
bool Stoplicht::getIsRood(){
    return isRood;
}
void Stoplicht::setGroen(){
    isRood = false;
}
void Stoplicht::setRood(){
    isRood = true;
}
void Stoplicht::setId(int id){
    this->id = id;
}
