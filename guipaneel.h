#ifndef GUIPANEEL_H
#define GUIPANEEL_H

#include <QObject>

class GUIPaneel : public QObject
{
    Q_OBJECT
public:
    explicit GUIPaneel(QObject *parent = 0);

signals:

public slots:
};

#endif // GUIPANEEL_H