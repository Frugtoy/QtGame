#include "health.h"

Health::Health(QGraphicsItem * parent):QGraphicsTextItem(parent)
{
    this->SetHealthPoints(10);
    this->setDefaultTextColor(Qt::blue);
    this->setFont(QFont("Times",12));
}
void Health::SetHealthPoints(int count){this->healthpoints = count; this->setPlainText(QString("Your health is: ")+ QString::number(this->getHealthPoints()));}
int Health::getHealthPoints() {return this->healthpoints;}
