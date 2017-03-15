#include "guipaneel.h"


GUIPaneel::GUIPaneel(QObject *parent) : QObject(parent)
{

}

bool GUIPaneel::updateStoplicht()
{
    StoplichtSysteem* stoplichtSysteem = sluisSysteem.getStoplichtSysteem();
    bool isRood = stoplichtSysteem->getStoplicht()->getIsRood();
    return isRood;
}
void GUIPaneel::maakStoplichtGroen()
{
    StoplichtSysteem* stoplichtSysteem = sluisSysteem.getStoplichtSysteem();
    stoplichtSysteem->getStoplicht()->setGroen();
}
void GUIPaneel::maakStoplichtRood()
{
    StoplichtSysteem* stoplichtSysteem = sluisSysteem.getStoplichtSysteem();
    stoplichtSysteem->getStoplicht()->setRood();
}
