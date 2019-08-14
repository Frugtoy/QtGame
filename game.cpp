#include "game.h"
Game::Game()
{
    this->scene = new QGraphicsScene();
    this->mainHero = new MyRect();
    this->mainHero->setRect(0,0,100,100);
    //add item 2 the scene
    this-> scene->addItem(mainHero);

    //only one item on screen could be a focusable , so ,lets do our "main" hero focusable
    this->mainHero->setFlag(QGraphicsItem::ItemIsFocusable);
    this->mainHero->setFocus();

    //add a view
    QGraphicsView *view = new QGraphicsView();//constructor can also include a scene
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setScene(this->scene);

    //show the view
    view->setFixedSize(800,600);
    this-> scene->setSceneRect(0,0,800,600);
    this->mainHero->setPos(view->width()/2,view->height() - mainHero->rect().height());
    view->show();

    //show our points
    this->points = new Score();
    scene->addItem(points);
    // SPAWN ENEMY
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),mainHero ,SLOT(spawn()));
    timer->start(2000);
  }
Game::~Game(){}
