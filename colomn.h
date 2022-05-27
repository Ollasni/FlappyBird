#ifndef COLOMN_H
#define COLOMN_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QKeyEvent>

class Colomn : public QObject, public QGraphicsRectItem
{
        Q_OBJECT
public:
    Colomn();
    int W = 1300;
   // int m = 0;
public slots:
    void move();

};

#endif // COLOMN_H
