#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QApplication>
#include <QGraphicsEllipseItem>
#include <bird.h>
#include <colomns.h>
#include <QGraphicsRectItem>

int main(int argc, char *argv[])
{
    int H = 600;
    int W = 1300;
    QApplication a(argc, argv);
    QGraphicsScene scene = new QGraphicsScene();
    scene.setSceneRect(0, 0, W, H);
    QGraphicsView view(&scene);
    Bird *birdIt = new Bird();
    birdIt->setRect(W/50, H / 2, 60, 60);
    scene.addItem(birdIt);
    birdIt->setFlag(QGraphicsItem::ItemIsFocusable);
    birdIt->setFocus();

    QGraphicsRectItem *colomnIt1 = new QGraphicsRectItem();
    colomnIt1->setRect(W/50 + W/10, 0, 60, 300);
    scene.addItem(colomnIt1);
  //  colomnIt1->setFlag(QGraphicsItem::ItemIsFocusable);
    //colomnIt1->setFocus();

    QGraphicsRectItem *colomnIt2 = new QGraphicsRectItem();
    colomnIt2->setRect(W/50 + W/10, H - 100, 60, 100); //colomnIt2->setFlag(QGraphicsItem::ItemIsFocusable);
    scene.addItem(colomnIt2);
      //colomnIt2->setFocus();
   // Colomns *colomnIt = new Colomns();


    scene.setBackgroundBrush(Qt::red);
    view.show();
   // delete rect;
   // delete scene;




    return a.exec();
}
