#include <iostream>
#include "../include/Circle.hpp"


Circle::Circle():PI(22/7) {
    _radius = 1;
    _area = getArea();
}

Circle::Circle(int radius):PI(22/7) {
    _radius = radius;
    _area = getArea();
}

int Circle::getArea() const {
    return PI * _radius * _radius;
}

void Circle::setRadius(int radius) {
    _radius = radius;
}

int Circle::getRadius() const {
    return _radius;
}