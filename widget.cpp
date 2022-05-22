#include "widget.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    func();
}

Widget::~Widget()
{

}

void Widget::func() {
    QGraphicsScene scene;
    QGraphicsView view(&scene);
    view.show();
    scene.setBackgroundBrush(Qt::blue);
    QRadialGradient gradient(0, 0, 10);
    gradient.setSpread(QGradient::RepeatSpread);
    scene.setBackgroundBrush(gradient);
}
