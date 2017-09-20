//
// Created by Kashingliu on 2017/9/19.
//

#ifndef DATA_STRUCTURE_VECTOR_DELETE_H
#define DATA_STRUCTURE_VECTOR_DELETE_H

#include "myVector.h"

template <typename T>
//我这么删除的话是lo到hi的左闭右开区间删除，而hi和hi之后的元素整体向左移动hi-lo+1
int Vector<T>::remove(int lo, int hi) {
    if (lo > hi||lo == hi) { return 0;}
    while ( hi < _size) {
        _elem[lo++] = _elem[hi++];
    }
    _size = lo;
    shrink();
    return hi - lo;         //返回的是被删除元素的个数
}

template <typename T>
int Vector<T>::remove(Rank r) {
    T e = _elem[r];
    remove(r, r+1);
    return e;
}

#endif //DATA_STRUCTURE_VECTOR_DELETE_H
