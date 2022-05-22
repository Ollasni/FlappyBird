#include "colomns.h"
#include <QKeyEvent>

Colomns::Colomns()
{
    colomn1->setRect(0, 0, 100, 10);
    colomn2->setRect(100, 100, 10, 100);
}

void Colomns::keyPressEvent(QKeyEvent *event) {
    if(event->key() == Qt::Key_Left) {
        setPos(x() - 10, y());
    }
    if(event->key() == Qt::Key_Right) {
        setPos(x() + 10, y());
    }
}
