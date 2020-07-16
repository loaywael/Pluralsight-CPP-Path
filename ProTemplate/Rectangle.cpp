/*
 * Rectangle.cpp
 *
 *  Created on: Jul 16, 2020
 *      Author: loay
 */

#include "Rectangle.hpp"


Rectangle::Rectangle() {
    _shape.height = 1;
    _shape.width = 1;
    area = getArea();
}

Rectangle::Rectangle(int height, int width) {
    _shape.height = height;
    _shape.width = width;
    area = getArea();
}

int Rectangle::getArea() const {
    return _shape.height * _shape.width;
}

void Rectangle::setShape(int height, int width) {
    _shape.height = height;
    _shape.width = width;
}

Rectangle::Shape Rectangle::getShape() const {
    return _shape;
}

