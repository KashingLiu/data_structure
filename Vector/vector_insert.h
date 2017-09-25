//
// Created by Kashingliu on 2017/9/19.
//

#ifndef DATA_STRUCTURE_VECTOR_INSERT_H
#define DATA_STRUCTURE_VECTOR_INSERT_H

#include "myVector.h"

template <typename T>
int Vector<T>::insert(Rank r, T const&e) {        //首先插入需要知道往哪里插入，也就是rank。其次需要知道插入什么，也就是e，一个数组或者是一个数
    expand();
    for (int i = _size; i > r ; --i) {
        _elem[i] = _elem[i-1];
    }
    _elem[r] = e;
    _size++;
    return r;
}

#endif //DATA_STRUCTURE_VECTOR_INSERT_H
