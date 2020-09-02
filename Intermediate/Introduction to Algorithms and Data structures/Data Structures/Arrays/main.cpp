#include <iostream>
#include "MyArray.hpp"
#include <vector>


template <class T>
std::ostream& operator<<(std::ostream& os, MyArray<T>& arr) {
    os << "[ ";
    for (int i{0}; i < arr.size(); i++) {
        os << arr[i] << " ";
    }
    os << "]" << "\n";
    return os;
}

int main() {
    MyArray<int> arr1{7};
    std::cout << arr1.size() << std::endl;

    MyArray<int> arr2{3};
    std::cout << arr2.size() << std::endl;
    arr2[2] = 25;
    std::cout << arr2;
    return 0;
}