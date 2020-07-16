/*
 * Circle.hpp
 *
 *  Created on: Jul 16, 2020
 *      Author: loay
 */

#ifndef CIRCLE_HPP_
#define CIRCLE_HPP_


class Circle{

private:
    const double PI;
    float area = 0;
    int _radius = 0;

public:
    Circle();
    Circle(int radius);
    void setRadius(int radius);
    int getRadius() const;
    int getArea() const;

};

#endif /* CIRCLE_HPP_ */
