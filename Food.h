#ifndef FOOD_H
#define FOOD_H

#include "Point.h"
class Food
{
private:
    Point position;
public:
    Food();
    ~Food();
    Point getFoodPosition();
    void setFood(Point newPosition);
    
};

#endif // FOOD_H