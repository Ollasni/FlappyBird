#include "board.h"
#include <QPixmap>
#include <QKeyEvent>

Board::Board(QWidget *parent)
    : QWidget(parent)
{
    size = QSize(1000, 500);
    position = QVector2D(1, size.height()/2);
    texture_bird = new QPixmap("");
    setStyleSheet("background-color:white;");
    started = true;
    figure = newPiece();
    timer.start(300, this);
}

Board::~Board()
{
}

void Board::step() {
    if(started) {

    }
    else {
        gameOver(this);
    }
}

Figures *Board::newPiece()
{
    Figures *figure = new Figures;
    figure->colomn1 = randomShape();
    figure->colomn2 = randomShape();
    X = 0;
    Y = 500;
    if (!checkForMove(figure, X, Y)) {
        timer.stop();
        started = false;
    }
    return figure;
}

void Board::pixStright(const Figures &newPiece)
{
    if (!checkForMove(newPiece, X + 1, Y)){
        int x = X + 1 - newPiece.colomn1;
        int y = Y + newPiece.colomn2;
        removeColomns();
    }
    &&&&&&&&&&&&
}


bool Board::checkForMove(const Figures &newPiece, int newX, int newY)
{
    int x = newX + newPiece.colomn1;
    int y = newY - newPiece.colomn2;
    if (x < 0 || x >= size.width() || y < 0 || y >= size.height())
        return false;

    X = newX;
    Y = newY;
    return true;
}


void Board::timerEvent(QTimerEvent *event)
{

        if (removeColomn) {
                Figures newFig = newPiece();
        }
        else
            pixStright(newFig);
}
void Board::keyPressEvent(QKeyEvent *event)
{
    int key = event -> key();
    if(key == Qt::Key_Left)
        checkForMove(figure, X - 1, Y);
    if(key == Qt::Key_Right)
        checkForMove(figure, X + 1, Y);
    if(key == Qt::Key_Down)
        checkForMove(figure, X, Y - 1);
    if(key == Qt::Key_Up)
        checkForMove(figure, X, Y + 1);
    QWidget::keyPressEvent(event);
}

int Figures::randomShape()
{
 int min = 1;
 int max = 1000;
 return (rand() % (max - min + 1) + min);
}

}
void Board::gameOver(QPixmap &qm) {
        QString message = "Game over";
        QFont font("Courier", 15, QFont::DemiBold);
        QPixmap(QColor(Qt::white));

}


bool Board::CheckCollision(Object2D *bird, Figures *colom)
{
    bool collision = 0;
    if(me.position.y >= colomn1 && me,position.y < colomn2)
        collision = true;
    else if(me.position.y < colomn1 && me,position.y >= colomn2)
        collision = true;
    else collision = false;
    return collision;
}

