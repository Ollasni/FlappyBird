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
    ~Colomn();
    int W = 1300;
public slots:
    void move();
signals:
    void cancel();

};

#endif // COLOMN_H
