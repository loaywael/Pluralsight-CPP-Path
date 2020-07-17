#pragma once
#include <iostream>


class Person {

private:
    std::string* _id;
    std::string _name;
    int _age;

public:
    explicit Person(): _name(""), _age(0), _id(nullptr){};
    explicit Person(std::string name, int age);
    explicit Person(Person& obj);
    ~Person();
    std::string getName() const;
    int getAge() const;
    void setName(std::string name);
    void setAge(int age);
    inline std::string getID() const{return *_id;} 

};