//
// Created by Kashingliu on 2017/9/19.
//

#ifndef DATA_STRUCTURE_VECTOR_COPYFROM_H
#define DATA_STRUCTURE_VECTOR_COPYFROM_H

#include "myVector.h"

template <typename T>
void Vector<T>::copyFrom(T const *A, Rank lo, Rank hi) {
    _elem = new T[_capacity = 2*(hi - lo)];
    _size = 0;
    while (lo < hi)
    {
        _elem[_size++] = A[lo++];
    }
}

#endif //DATA_STRUCTURE_VECTOR_COPYFROM_H
