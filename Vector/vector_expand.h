//
// Created by Kashingliu on 2017/9/19.
//

#ifndef DATA_STRUCTURE_VECTOR_EXPAND_H
#define DATA_STRUCTURE_VECTOR_EXPAND_H

#include "myVector.h"

template <typename T>
void Vector<T>::expand() {
    if (_size<_capacity) { return; }
    if (_capacity < DEFAULT_CAPACITY) _capacity = DEFAULT_CAPACITY;
    T* oldElem = _elem;
    _elem = new T[_capacity = _capacity << 1];
    for (int i = 0; i < _size; ++i) {
        _elem[i] = oldElem[i];
    }
    delete [] oldElem;
}

#endif //DATA_STRUCTURE_VECTOR_EXPAND_H
