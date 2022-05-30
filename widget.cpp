#include "widget.h"
#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPixmap>
#include <QTimer>
#include <iostream>
#include <QGraphicsItem>


using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    pixmap = new QPixmap();
    scene = new QGraphicsScene(this);
    scene->setSceneRect(0, 0, W, H);
    view = new QGraphicsView(scene, this);
    scene->setBackgroundBrush(Qt::red);
    bird = new Bird();
    bird->setRect(W/50, H / 2, 60, 60);
    scene->addItem(bird);
    bird->setFlag(QGraphicsItem::ItemIsFocusable);
    bird->setFocus();
    view->show();
    QTimer *timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(spawn()));
    timer->start(2000);
    QObject::connect(this, SIGNAL(cancelTimer()), timer, SLOT(stop()));


}

Widget::~Widget()
{
    delete bird;
    delete view;
    delete pixmap;   
    delete scene;
    for(int i = 0; i < vect.size(); i++) {
        cout << "x" << endl;
        if(vect[i] != nullptr) {
            delete vect[i];
            std::cout << "done" << std::endl;
        }
    }
     delete overText;
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

    QObject::connect(col, SIGNAL(cancel()), this, SLOT(gameOver()));
    QObject::connect(col1, SIGNAL(cancel()), this, SLOT(gameOver()));

}


void Widget::gameOver() {
    scene->clear();
    scene->setBackgroundBrush(Qt::blue);
    emit cancelTimer();
    QGraphicsTextItem* overText = new QGraphicsTextItem(QString("GAME OVER"), nullptr);
    overText->setPos(W/2 ,H/2);
    scene->addItem(overText);

}
