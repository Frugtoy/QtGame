#ifndef BULLET_H
#define BULLET_H
#include<QGraphicsRectItem>
#include<QObject>
#include <QDebug>
#include <QGraphicsScene>
#include <QTimer>
#include "enemy.h"


class Bullet: public QObject,public QGraphicsRectItem {
    Q_OBJECT
public:
    Bullet();
    ~Bullet();
public slots:
    void move();
};

#endif // BULLET_H
