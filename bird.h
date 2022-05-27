#ifndef BIRD_H
#define BIRD_H

#include <QGraphicsEllipseItem>
#include <QObject>
#include <QKeyEvent>
class Bird : public QGraphicsEllipseItem
{
public:
    Bird();
    void keyPressEvent(QKeyEvent *event);
};

#endif // BIRD_H
