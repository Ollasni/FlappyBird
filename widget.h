#ifndef WIDGET_H
#define WIDGET_H

#include <QGraphicsScene>
#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void func();
};
#endif // WIDGET_H
