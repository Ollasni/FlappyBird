#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QPixmap>
#include <board.h>

class MainWindow : public QMainWindow
{
    QPixmap *pixmap;
    Board thisBoard;
public:
    void draw();
    MainWindow(QWidget *parent = NULL);
    ~MainWindow();
};

#endif // MAINWINDOW_H
