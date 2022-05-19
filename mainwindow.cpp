#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    pixmap = new QPixmap(thisBoard.size());

}

MainWindow:: ~MainWindow() {
    delete pixmap;
}

void MainWindow::frame() {
    thisBoard.step();
    thisBoard.draw(pixmap);
}
