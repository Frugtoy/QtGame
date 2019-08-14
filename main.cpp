#include <QApplication>
#include<QGraphicsScene>
#include "player.h"
#include "bullet.h"
#include<QGraphicsItem>
#include<QGraphicsView>
#include <QTimer>
#include "game.h"
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
Game* game;
int main(int argc, char *argv[] )
{
    QApplication a(argc, argv);
    game = new Game();
    game->show();
    delete game;
    return a.exec();
}
