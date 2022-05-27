#include "widget.h"
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>
#include <QTimer>
#include <iostream>
#include <QGraphicsItem>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    pixmap = new QPixmap();
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0, 0, W, H);
    view = new QGraphicsView(scene, this);
    scene->setBackgroundBrush(Qt::red);
    bird = new Bird();
    //bird = new setPixmap(QPixmap(":/home/olya/untitled4/backgr.jpg"));
    bird->setRect(W/50, H / 2, 60, 60);
    scene->addItem(bird);
    bird->setFlag(QGraphicsItem::ItemIsFocusable);
    bird->setFocus();
    view->show();
    QTimer *timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(spawn()));
    timer->start(2000);
}

Widget::~Widget()
{
    delete scene;
    delete view;
    delete pixmap;
   /* for(int i = 0; i < vect.size(); i++) {
        if(vect[i] != nullptr) {
            delete vect[i];
            std::cout << "done" << std::endl;
        }*/
//}
}
void Widget::spawn() {
    Colomn *col = new Colomn();
    Colomn *col1 = new Colomn();
    vect.push_back(col);
    vect.push_back(col1);
    int x = rand()% 400;

    col->setRect(W - 100, 0, 60, x);
    col1->setRect(W - 100, x + 100, 60, H - 100 - x);
    y++;
    vect.push_back(col);
    vect.push_back(col1);
    scene->addItem(col);
    scene->addItem(col1);

    bool collision = 0;
    if(bird->pos().y() >= col1->pos().y() && bird->pos().y() < col->pos().y())
        collision = true;
    else if(bird->pos().y() < col1->pos().y() && bird->pos().y() >= col->pos().y())
        collision = true;
    else collision = false;
    if(collision) {
        std::cout << 1;
        //gameOver();
    }

}


void Widget::gameOver() {
    QString message = "Game over";
    QFont font("Courier", 15, QFont::DemiBold);
    QPainter qp;
    qp.setPen(QColor(Qt::white));
    qp.setFont(font);
    qp.translate(QPoint(160, 400));
    qp.drawText(-5, 0, message);
}*/
