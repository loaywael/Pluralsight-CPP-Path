#pragma once
#include <iostream>


template <class T>
class MyArray {
private:
    int arr_size{0};
    T* val_ptr{nullptr};
public:
    MyArray() = default;
    explicit MyArray(int size) {
        if (size > 0) {
            val_ptr = new T [size]{};
            arr_size = size;
        }
    }
    ~MyArray(){
        delete[] val_ptr;
        val_ptr = nullptr;
        arr_size = 0;
    }
    int size() const {return arr_size;}
    bool isEmpty() const {return arr_size == 0 ? true:false;}
    bool isValidIndex(int id) const {return id >= 0 && id <= arr_size-1;} 

    T& operator[](int id) {
        if (isValidIndex(id)) {
            return val_ptr[id];
        }
        else {
            throw std::out_of_range("index is out of range");
        }
    }    
};