#ifndef BIRD_H
#define BIRD_H

#include <QGraphicsRectItem>
#include <QObject>

class Bird : public QGraphicsEllipseItem
{
public:
    Bird();
    void keyPressEvent(QKeyEvent *event);
};

#endif // BIRD_H
