#include "bullet.h"
#include <QTimer>
#include <QDebug>
#include<QGraphicsScene>

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
    this->setPos(this->x(),this->y()-10);
    if(this->pos().y() + this->rect().height()< 0) {
        scene()->removeItem(this);
        delete this;
    }
}

