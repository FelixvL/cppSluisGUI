#ifndef STOPLICHT_H
#define STOPLICHT_H


class Stoplicht
{
    bool isRood;
    int id;
public:
    bool getIsRood();
    void setGroen();
    void setRood();
    void getId();
    void setId(int id);
    Stoplicht();
};

#endif // STOPLICHT_H
