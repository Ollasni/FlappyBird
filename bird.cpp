#include "bird.h"
#include <QPainter>

Bird::Bird()
{
}
void Bird::keyPressEvent(QKeyEvent *event) {
   /*if(event->key() == Qt::Key_Left) {
        setPos(x() - 10, y());
    }
    if(event->key() == Qt::Key_Right) {
        setPos(x() + 10, y());
    }*/
    if(event->key() == Qt::Key_Up) {
        setPos(x(), y() - 10);
    }
    if(event->key() == Qt::Key_Down) {
        setPos(x(), y() + 10);
    }
}
