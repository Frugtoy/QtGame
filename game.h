#ifndef GAME_H
#define GAME_H
#include<QGraphicsView>
#include<QWidget>
#include<QGraphicsScene>
#include <QTimer>
#include<player.h>
#include "score.h"

class Game : public QGraphicsView
{
public:
    Game();
    ~Game();
    QGraphicsScene * scene;
    MyRect * mainHero;
    Score * points;

};

#endif // GAME_H
