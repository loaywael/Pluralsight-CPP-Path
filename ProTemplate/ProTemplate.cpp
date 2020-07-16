#include <iostream>
#include "Rectangle.hpp"
#include "Circle.hpp"


int main(int argc, char** argv) {
    Circle c1(3);
    Rectangle rec1(3, 5);
    std::cout << "circle (c1) area: " << c1.getArea() << std::endl;
    std::cout << "Rectangle (rec1) area: " << rec1.getArea() << std::endl;
    return 0;
}
