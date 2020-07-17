#include <iostream>
#include "Person.hpp"


Person::Person(std::string name, int age) 
: _name(name), _age(age), _id(nullptr) 
{
    _id = new std::string("007");
}

Person::Person(Person& obj) 
    : _id(nullptr), _name(obj._name), _age(obj._age) {
    _id = new std::string(*(obj._id));
}

Person::~Person() {
    delete _id; 
    _id=nullptr; 
    std::cout << "destroyed person!" << std::endl;
}

void Person::setName(std::string name) {
    _name = name;
}

void Person::setAge(int age) {
    _age = age;
}

int Person::getAge() const {
    return _age;
}

std::string Person::getName() const {
    return _name;
}