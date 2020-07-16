#pragma once
#include <iostream>


class Rectangle{

private:
    struct Shape{
        int height = 0;
        int width = 0;
    };
    Shape _shape;
    float _area;

public:
    Rectangle();
    Rectangle(int height, int width);
    void setShape(int height, int width);
    Shape getShape() const;
    int getArea() const;

};