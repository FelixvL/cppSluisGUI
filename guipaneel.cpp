#include "guipaneel.h"


GUIPaneel::GUIPaneel(QObject *parent) : QObject(parent)
{

}

bool GUIPaneel::updateStoplicht(int i)
{
    StoplichtSysteem* stoplichtSysteem = sluisSysteem.getStoplichtSysteem();
    bool isRood = stoplichtSysteem->getStoplicht(i)->getIsRood();
    return isRood;
}
void GUIPaneel::maakStoplichtGroen(int i)
{
    qDebug() << "int i :" << i;
    StoplichtSysteem* stoplichtSysteem = sluisSysteem.getStoplichtSysteem();
    stoplichtSysteem->getStoplicht(i)->setGroen();
 }
void GUIPaneel::maakStoplichtRood()
{
    StoplichtSysteem* stoplichtSysteem = sluisSysteem.getStoplichtSysteem();
    stoplichtSysteem->getStoplicht(0)->setRood();
    stoplichtSysteem->getStoplicht(1)->setRood();
    stoplichtSysteem->getStoplicht(2)->setRood();
    stoplichtSysteem->getStoplicht(3)->setRood();
}
