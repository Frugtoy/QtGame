#ifndef MYRECT_H
#define MYRECT_H
#include<QObject>
#include<QGraphicsRectItem>
#include<QKeyEvent>
#include"bullet.h"
class MyRect : public QObject, public QGraphicsRectItem {
Q_OBJECT
public:
    MyRect();
    void keyPressEvent(QKeyEvent* event);
    ~MyRect();
public slots:
   void spawn();
};


#endif // MYRECT_H
