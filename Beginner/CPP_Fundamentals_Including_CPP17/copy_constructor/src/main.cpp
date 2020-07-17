#include <iostream>
#include "Person.hpp"


int main(int argc, char** argv) {
    Person pr1("Loay", 24);
    pr1.setAge(11);
    Person pr2(pr1);   // == Person pr2(pr1)
    // Person p2 = {"Loay", 24};    // implicit init not allowed
    std::cout << "person name: " << pr1.getName() << "\t"
              << "person age: " << pr1.getAge() << "\t"
              << "person id: " << pr1.getID() << std::endl;

    std::cout << "person name: " << pr2.getName() << "\t"
              << "person age: " << pr2.getAge() << "\t"
              << "person id: " << pr2.getID() << std::endl;
    
    // std::shared_ptr<Person> p2 = std::make_shared<Person>();
    
    return 0;
}