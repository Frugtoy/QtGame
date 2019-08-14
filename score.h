#ifndef SCORE_H
#define SCORE_H
#include<QGraphicsTextItem>
#include <QFont>
class Score: public QGraphicsTextItem
{
public:
    Score(QGraphicsItem * parent = nullptr);
    void increase();
    int getPoints();
private:
    int points;
};

#endif // SCORE_H
