//
// Created by jdoba on 2/12/2023.
//

#include "DinamicArray.h"

Array::Array(int n) {
    if (n > 0) {
        size = n;
    } else {
        size = 10;
    }
    ptr = new int[size];
}

Array::Array(const Array &obj) {
    size = obj.size;
    ptr = new int[size];
    for (size_t i = 0; i < obj.size; i++) {
        ptr[i] = obj.ptr[i];
    }
}

Array::~Array() {
    delete[] ptr;
}

size_t Array::getSize() const {
    return size;
}

const Array &Array::operator=(const Array &obj) {
    if (&obj != this) {
        if (size != obj.size) {
            delete[] ptr;
            size = obj.size;
            ptr = new int[size];
        }

        for (size_t i = 0; i < size; i++) {
            ptr[i] = obj.ptr[i];
        }
    }
    return *this;
}

bool Array::operator==(const Array &obj) const {
    if (size != obj.size) {
        return false;
    }
    for (size_t i = 0; i < size; i++) {
        if (ptr[i] != obj.ptr[i]) {
            return false;
        }
    }
    return true;
}

bool Array::operator!=(const Array &obj) const {
    return !(*this == obj);
}


int &Array::operator[](int n) {
    return ptr[n];
}

int Array::operator[](int n) const {
    return ptr[n];
}

std::ostream &operator<<(std::ostream &os, const Array &obj) {
    for (size_t i = 0; i < obj.size; i++) {
        os << obj.ptr[i] << " ";
    }
    return os;
}

std::istream &operator>>(std::istream &is, Array &obj) {
    for (size_t i = 0; i < obj.size; i++) {
        is >> obj.ptr[i];
    }
    return is;
}

const Array &Array::operator+=(int n) {
    int *temp_ptr = new int[size+1];
    for (size_t i = 0; i < size; i++) {
        temp_ptr[i] = ptr[i];
    }
    temp_ptr[size] = n;
    size++;
    delete[] ptr;
    ptr = temp_ptr;

    return *this;
}

Array &Array::operator--(){
    int *temp_ptr = new int[size-1];
    for (size_t i = 0; i < size-1; i++) {
        temp_ptr[i] = ptr[i];
    }
    size--;
    delete[] ptr;
    ptr = temp_ptr;
    return *this;
}

Array Array::operator--(int){
    Array temp = *this;
    int *temp_ptr = new int[size-1];
    for (size_t i = 0; i < size-1; i++) {
        temp_ptr[i] = ptr[i];
    }
    size--;
    delete[] ptr;
    ptr = temp_ptr;
    return temp;
}

