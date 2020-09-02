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
    MyArray<int> arr1{1};
    std::cout << arr1.size() << std::endl;

    MyArray<int> arr2{3};
    std::cout << arr2.size() << std::endl;
    arr2[2] = 25;
    std::cout << arr2;

    MyArray<int> arr3 = arr2;
    std::cout << "size arr3: " << arr3.size() << "\tarr3 val: " << arr3;
    
    MyArray<int> arr4(11);
    std::cout << arr4;
    arr4 = arr3;
    std::cout << arr4;

    MyArray<int> arr5{9};
    std::cout << arr5;
    swap_arrays(arr5, arr1);
    std::cout << "arr5: " << arr5 << "arr1: " << arr1;

    MyArray<int> arr6(std::move(arr1));
    std::cout << arr6;

    MyArray<int> arr7;
    arr7 = std::move(arr2);
    std::cout << "arr7: " << arr7 << "arr2: " << arr2;
    
    return 0;
}