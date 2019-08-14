#include "player.h"

MyRect:: MyRect(){}
void MyRect::keyPressEvent(QKeyEvent * event){

    if( event->key() == Qt::Key_Left) {
        if (this->pos().x() > 0 ){
            this->setPos(x()-10,y());
        }
    }
    else if( event->key() == Qt::Key_Right) {
        if (this->pos().x() + 100 < 800 )
        this->setPos(x()+10,y());
    }
   /* else if( event->key() == Qt::Key_Up) {
        this->setPos(x(),y()-10);
    }
    else if( event->key() == Qt::Key_Down) {
        this->setPos(x(),y()+10);
    }*/
        else if (event->key() == Qt::Key_Space){
            //create a bullet
         Bullet* bullet = new Bullet();
        // qDebug()<<"a bullet has been created";
         bullet->setPos(this->x()+45,this->y());
         this->scene()->addItem(bullet);
        }
}
void MyRect::spawn(){
    Enemy * enemy = new Enemy();
    this->scene()->addItem(enemy);
}
MyRect:: ~MyRect(){}
