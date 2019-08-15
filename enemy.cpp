#include "enemy.h"
#include "game.h"
extern Game* game;

Enemy::Enemy(){
   //rand pos
   this->setPos(rand() % 700, 0);
    //set enemy view
   this->setRect(0,0,50,50);

   QTimer* timer = new QTimer();
   connect(timer,SIGNAL(timeout()),this,SLOT(move()));
   timer->start(50);
   qDebug()<<"enemyhas been created";
}
Enemy::~Enemy(){
    qDebug()<<"enemy has been destroyed";
}
void Enemy::move() {
    if(this->pos().y() < 600 ) {
        this->setPos(this->pos().x(),this->pos().y() + 10);
    }
    else {
    game->hp->SetHealthPoints(game->hp->getHealthPoints()-2);
    scene()->removeItem(this);
    delete this;
    }

}

