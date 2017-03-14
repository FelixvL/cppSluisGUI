#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QDebug>
#include <QPoint>
#include "sluissysteem.h"
#include <string>


using namespace std;

class Game : public QObject
{
    Q_OBJECT
public:
    SluisSysteem sluisSysteem;
    explicit Game(QObject *parent = 0);
    Q_INVOKABLE void test();
    Q_INVOKABLE int nuString();
    Q_INVOKABLE bool doen();

signals:

public slots:
};

#endif // GAME_H
