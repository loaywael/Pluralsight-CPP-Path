#pragma once
#include <iostream>
#include <algorithm>

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

    // copy constructor for deep copy and double delete bug prevention
    MyArray(MyArray& srcObj) {
        if (!srcObj.isEmpty()) {
            std::cout << "a copy were constructed\n";
            arr_size = srcObj.size();
            val_ptr = new T [arr_size]{};
            for (int i{0}; i < srcObj.arr_size; i++) {
                val_ptr[i] = srcObj[i];
            }
        }
    }

    // copy swap idiom -- cleaner implementation
    friend void swap_arrays(MyArray& arr1, MyArray& arr2) noexcept {
        std::swap(arr1.arr_size, arr2.arr_size);
        std::swap(arr1.val_ptr, arr2.val_ptr);
        // destructor is called after exiting the function on src copy
    }

    // cleaner implementation of copy assignment overloading
    // that automatically calls move constructors
    MyArray& operator=(MyArray srcObjCpy) noexcept{ 
        swap_arrays(*this, srcObjCpy);
        return *this;
        // destructor is called after exiting the function on src copy
    }

    // longer implementation of copy assignment overloading
    // MyArray& operator=(MyArray& srcObj) noexcept{ 
    //     // prevents x = x
    //     if (this != &srcObj) {
    //         // release previous array blocks if any
    //         if (!this->isEmpty()) {
    //             delete[] val_ptr;  
    //             arr_size = srcObj.size();
    //             val_ptr = new T [arr_size];
    //         }
    //         // implement deep copy from src to this
    //         for (int i{0}; i < srcObj.size(); i++) {
    //             val_ptr[i] = srcObj[i];
    //         }
    //     }
    //     return *this;
    // }

    MyArray(MyArray&& src) noexcept{
        std::cout << "a move were constructed\n";
        arr_size = src.size();
        val_ptr = src.val_ptr;
        src.arr_size = 0;
        src.val_ptr = nullptr;
    }
};

