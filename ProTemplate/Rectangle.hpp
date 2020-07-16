/*
 * Rectangle.hpp
 *
 *  Created on: Jul 16, 2020
 *      Author: loay
 */

#ifndef RECTANGLE_HPP_
#define RECTANGLE_HPP_

class Rectangle{

private:
    struct Shape{
        int height = 0;
        int width = 0;
    };
    Shape _shape;
    float area;

public:
    Rectangle();
    Rectangle(int height, int width);
    void setShape(int height, int width);
    Shape getShape() const;
    int getArea() const;

};

#endif /* RECTANGLE_HPP_ */
