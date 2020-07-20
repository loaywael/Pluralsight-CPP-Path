#pragma once
#include <iostream>

class Person{

protected:
    std::string _title;
    Person(std::string const& name, int age, std::string const& title)
    : _name(name), _age(age), _title(title)
    {
    }

private:
    std::string _name;
    int _age;

public:
    Person(): _name(""), _age(0), _title(""){}
    Person(std::string name, int age): _name(name), _age(age), _title(""){}
    inline virtual void do_work() const {std::cout << "Nothing to do!" << std::endl;}
    inline void printName() const {std::cout << _name << "\t";}
    inline void setTitle(const std::string& title) {_title = title;}
    inline void setName(const std::string& name) {_name = name;}
     ~Person(){std::cout << "Destroying Person object\n" << std::endl;}
};


class Developer: public Person{

private:
    std::string _appName;

public:
    Developer(): Person::Person(), _appName("NaN") {
        Person::setName("None");
        Person::setTitle("N/A");
    }
    Developer(std::string name, int age, std::string title, std::string appName)
    : Person::Person(name, age, title), _appName(appName)
    {
    };
    inline void do_work() const {std::cout << "Developing " << _appName << std::endl;}
    inline void stateYourJob() const {std::cout << "I'm a " << _title << std::endl;}
    ~Developer(){std::cout << "Destroying Developer object" << std::endl;}
};

class Teacher: public Person{

private:
    std::string _subjectName;
    int _age;

public:
    Teacher(): Person::Person(), _subjectName(""){}
    Teacher(std::string name, int age, std::string title, std::string subjectName)
    : Person::Person(name, age, title), _subjectName(subjectName)
    {
    };
    inline void do_work() const {std::cout << "Teaching " << _subjectName << std::endl;}
    ~Teacher(){std::cout << "Destroying Teacher object" << std::endl;}
};