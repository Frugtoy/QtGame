#include "bullet.h"
#include <QTimer>
#include <QDebug>
#include<QGraphicsScene>
#include <QList>
#include "enemy.h"

Bullet:: Bullet(){
    //drew the rect

    setRect(0,0,10,50);
//connect
    QTimer* timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(50);
    qDebug()<<"a bullet has been created";
}
Bullet::~Bullet(){ qDebug()<<"a bullet has been destroyed";}
void Bullet::move(){
    //if collide with an enemy destroy both
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0 , n = colliding_items.size();i < n; ++i) {
        if(typeid(*(colliding_items[i]))== typeid(Enemy)) {
            //remove them both
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            //free memory
            delete colliding_items[i];
            delete this;
        }
    }
    this->setPos(this->x(),this->y()-10);
    if(this->pos().y() + this->rect().height()< 0) {
        scene()->removeItem(this);
        delete this;
    }
}

