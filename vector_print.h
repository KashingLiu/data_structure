//
// Created by Kashingliu on 2017/9/20.
//

#ifndef DATA_STRUCTURE_VECTOR_PRINT_H
#define DATA_STRUCTURE_VECTOR_PRINT_H

#include "myVector.h"
#include <iostream>

using namespace std;

template <typename T>
void Vector<T>::print() {

    for (int i = 0; i < _size; ++i) {
        cout << _elem[i] << " ";
    }
    cout << endl;
}
#endif //DATA_STRUCTURE_VECTOR_PRINT_H
