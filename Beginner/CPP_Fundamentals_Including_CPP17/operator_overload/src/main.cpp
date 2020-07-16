#include <iostream>
#include "../include/Circle.hpp"
#include "../include/Rectangle.hpp"

bool operator<(const Rectangle& c, const Circle& rec) {
    return c.getArea() < rec.getArea()? true:false; 
}

bool operator>(const Rectangle& c, const Circle& rec) {
    return c.getArea() > rec.getArea()? true:false; 
}

bool operator==(const Rectangle& c, const Circle& rec) {
    return c.getArea() == rec.getArea()? true:false; 
}

int main(int argc, char** argv) {
    Circle c1(3);
    Rectangle rec1(3, 5);
    std::cout << "circle (c1) area: " << c1.getArea() << std::endl;
    std::cout << "Rectangle (rec1) area: " << rec1.getArea() << std::endl;
    std::cout << "rec1 < c1 ? " << (rec1 < c1) << std::endl;
    std::cout << "rec1 > c1 ? " << (rec1 > c1) << std::endl;
    std::cout << "rec1 = c1 ? " << (rec1 == c1) << std::endl;
    
    return 0;
}