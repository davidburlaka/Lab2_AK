#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "point.h"

class Circle
{
private:
    float radius;
    Point center;

public:

    // Getters
    float getR() const { return radius; }
    float getX() const { return center.getX(); }
    float getY() const { return center.getY(); }

    // Setters
    void setR(float r) { this->radius = r; }
    void setX(float x) { center.setX(x); }
    void setY(float y) { center.setX(y); }

    void display() const;
    void promptForCircle();
};

#endif

