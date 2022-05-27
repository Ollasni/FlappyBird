#ifndef WIDGET_H
#define WIDGET_H

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QWidget>
#include "bird.h"
#include "colomn.h"

class Widget : public QWidget
{
    Q_OBJECT
    QGraphicsScene *scene;
    QGraphicsView *view;
    QPixmap *pixmap;
    Bird *bird;
  //  Colomn *c1;
   // Colomn *c2;
    int y = 2;
    QList<Colomn *> vect;
    int count;
    void checkCollision();
   // CreateColomns *c;
public:
    int H = 600;
    int W = 1300;
   // void keyPressEvent(QKeyEvent * event);
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void gameOver();
public slots:
    void spawn();
};
#endif // WIDGET_H
