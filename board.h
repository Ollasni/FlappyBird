#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include <QBasicTimer>
#include <QWidget>
#include <QVector2D>
#include <figures.h>

class Board : public QWidget
{
    Q_OBJECT
    QSize size;
    QVector2D position;
    QPixmap *texture_bird;
    bool started;
    friend class MainWindow;
    Figures *figure;
protected:
    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent *event);
    void timerEvent(QTimerEvent *event);

public:
    int randomShape();
    void step();
    void pixStright(Figures &newPiece);
    void removeColomns();
    void draw(QPixmap *pixmap);
    void gameOver(QPainter &qm);
    bool checkForMove(const Figures &newFigure, int newX, int newY);
    int X;
    int Y;
    Figures *newPiece(int, int);
    QBasicTimer timer;
    Board(QWidget *parent = nullptr);
    ~Board();
};
#endif // BOARD_H
