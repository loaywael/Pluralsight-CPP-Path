#pragma once
#include <iostream>


class Circle{

private:
    const double PI;
    float _area = 0;
    int _radius = 0;

public:
    Circle();
    Circle(int radius);
    void setRadius(int radius);
    int getRadius() const;
    int getArea() const;

};