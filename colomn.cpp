#include "colomn.h"
#include "qgraphicsscene.h"
#include "qtimer.h"
#include <iostream>
using namespace std;
Colomn::Colomn()
{
    std::cout << "CREATED ";
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(move()));
    timer->start(50);
}

Colomn::~Colomn() {
    std::cout << "DELETED ";
}
void Colomn::move() {
    if(scene()->collidingItems(this).isEmpty()) {
        cout << "move " << endl;
        setPos(x() - 5, y());
        if(pos().x() + rect().width() == -W + 150) {
            scene()->removeItem(this);
            delete this;
         }
    }
    else  {
        emit cancel();
        cout << "signal " << endl;
    }

}
