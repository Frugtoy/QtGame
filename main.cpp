#include <QApplication>
#include<QGraphicsScene>
#include "myrect.h"
#include "bullet.h"
#include<QGraphicsItem>
#include<QGraphicsView>

/*          game dev brainstorm
---------------1lvl--------------------
prerege : basic knowleges about c++ such as memory management and some basic knowleges about qtcreator
QGraphicsScene
QGraphicsItem(QGraphicsRectItem)
QGraphicsView
---------------2lvl--------------------
-events (keyPressEvent() and QKeyEvent)
-event propogation system
-QDebug

----------------3lvl-------------------


*/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene * scene = new QGraphicsScene();

    MyRect * mainHero = new MyRect();

    mainHero->setRect(0,0,100,100);
    //add item 2 the scene
    scene->addItem(mainHero);

    //only one item on screen could be a focuseble , so ,lets do our "main" hero focusable
    mainHero->setFlag(QGraphicsItem::ItemIsFocusable);
    mainHero->setFocus();
    //add a viev
    QGraphicsView *view = new QGraphicsView();//constructor can also include a scene
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setScene(scene);
//show the view
    view->setFixedSize(800,600);
    scene->setSceneRect(0,0,800,600);
    mainHero->setPos(view->width()/2,view->height() - mainHero->rect().height());
    view->show();

    return a.exec();
}
