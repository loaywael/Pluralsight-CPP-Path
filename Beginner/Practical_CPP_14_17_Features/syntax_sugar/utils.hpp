#pragma once
#include <iostream>


[[deprecated]]
void print(std::string const& msg, bool endline=true) {
    std::cout << msg << "\t";
    if (endline) {
        std::cout << std::endl;
    }
}

constexpr int Febonacii(int num) {
    switch (num)
    {
    case 0: return 0;
    case 1: return 1;

    default:
        return Febonacii(num-2) + Febonacii(num -1);
        break;
    }
}