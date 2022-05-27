#include "colomn.h"
#include "qgraphicsscene.h"
#include "qtimer.h"
#include <iostream>

Colomn::Colomn()
{
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);
}

void Colomn::move() {
    setPos(x() - 5, y());
    if(pos().x() + rect().width() == -W + 150) {
        scene()->removeItem(this);
        delete this;
     }
}
