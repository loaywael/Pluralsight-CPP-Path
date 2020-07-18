#include <iostream>
#include "../include/modern_location.hpp"


modern::Location::Location()
: _x(0), _y(0), _z(0) {
    _location = std::make_unique<std::vector<int>>(); 
    *_location = {_x, _y, _z};
}


modern::Location::Location(int x, int y, int z)
: _x(x), _y(y), _z(z), _location(std::make_unique<std::vector<int>>()) {
    *_location = {_x, _y, _z};
}

modern::Location::Location(const modern::Location& obj)
: _x(obj._x), _y(obj._x), _z(obj._x) {
    _location = std::make_unique<std::vector<int>>(*(obj._location));
}

modern::Location::~Location() {
    std::cout << "destroyed modern::Location object!" << std::endl;
}