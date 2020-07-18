#include <iostream>
#include "include/Location.hpp"


old::Location::Location(int x, int y, int z)
: _x(x), _y(y), _z(z), _location(new std::vector<int>({_x, _y, _z})) {

}

old::Location::Location(const old::Location& obj)
: _x(obj._x), _y(obj._x), _z(obj._x) {
    _location = new std::vector<int>(*(obj._location));
}

old::Location::~Location() {
    delete _location;
    _location = nullptr;
    std::cout << "destroyed old::Location object!" << std::endl;
}