#ifndef GUIPANEEL_H
#define GUIPANEEL_H

#include <QObject>
#include <QDebug>
#include <QPoint>
#include "sluissysteem.h"

using namespace std;

class GUIPaneel : public QObject
{
    Q_OBJECT
public:
    SluisSysteem sluisSysteem;
    explicit GUIPaneel(QObject *parent = 0);
    Q_INVOKABLE bool updateStoplicht(int i);
    Q_INVOKABLE void maakStoplichtGroen(int i);
    Q_INVOKABLE void maakStoplichtRood();

signals:

public slots:
};

#endif // GUIPANEEL_H
