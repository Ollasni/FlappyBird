#ifndef COLOMNS_H
#define COLOMNS_H

#include <QGraphicsRectItem>
#include <QObject>

class Colomns : public QGraphicsRectItem
{
   // QVector<QGraphicsRectItem> colomnIt;
    QGraphicsRectItem *colomn1;
    QGraphicsRectItem *colomn2;
public:
    Colomns();
    void randomShape();
    void keyPressEvent(QKeyEvent *event);
};

#endif // COLOMNS_H
