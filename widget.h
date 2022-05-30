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
    QTimer *timer;
    int y = 2;
    QVector<Colomn *> vect;
    int count;
    QGraphicsTextItem* overText;
    void checkCollision();
public:
    int H = 600;
    int W = 1300;
    Widget(QWidget *parent = nullptr);
    ~Widget();
signals:
    void cancelTimer();
public slots:
    void spawn();
    void gameOver();
};
#endif // WIDGET_H
