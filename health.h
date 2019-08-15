#ifndef HEALTH_H
#define HEALTH_H
#include<QGraphicsTextItem>
#include<QFont>
class Health : public QGraphicsTextItem
{
public:
    Health(QGraphicsItem* parent = nullptr);
    void SetHealthPoints(int count);
    int  getHealthPoints();
private:
    int healthpoints;
};

#endif // HEALTH_H

