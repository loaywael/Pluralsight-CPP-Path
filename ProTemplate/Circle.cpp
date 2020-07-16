/*
 * Circle.cpp
 *
 *  Created on: Jul 16, 2020
 *      Author: loay
 */

#include "Circle.hpp"

Circle::Circle():PI(22/7) {
    _radius = 1;
    area = getArea();
}

Circle::Circle(int radius):PI(22/7) {
    _radius = radius;
    area = getArea();
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
