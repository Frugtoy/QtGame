#ifndef ENEMY_H
#define ENEMY_H
#include <QObject>
#include <QGraphicsRectItem>
#include <QDebug>
#include <stdlib.h>//random
#include <QTimer>
#include <QGraphicsScene>

class Enemy: public QObject , public QGraphicsRectItem {
Q_OBJECT
public:
    Enemy();
    ~Enemy();
public slots:
    void move();
};

#endif // ENEMY_H
