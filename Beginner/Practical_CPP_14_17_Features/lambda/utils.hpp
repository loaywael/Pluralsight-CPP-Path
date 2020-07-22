#pragma once
#include <iostream>


template <typename T>
void printVector(std::vector<T> const& V) {
    for (auto i : V) {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
}
