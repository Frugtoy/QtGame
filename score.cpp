#include "score.h"


Score::Score(QGraphicsItem* parent):QGraphicsTextItem(parent)
{
   points = 0;
   this->setPlainText(QString("Your points is: ")+ QString::number(this->points));
   this->setDefaultTextColor(Qt::red);
   this->setFont(QFont("Fantasy",12));
}
void Score::increase() {
    this->points++;
    this->setPlainText(QString("Your points is: ")+QString::number(this->points));
}
int Score::getPoints() {
    return this->points;
}
