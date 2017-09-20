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
//这是先实现了对多个元素的删除，在此基础上删除一个元素，而如果先删除一个，再在此基础上重复hi-lo次也是可行的，但前者时间复杂度为O(N)，后者时间复杂度为O(N^2)

#endif //DATA_STRUCTURE_VECTOR_DELETE_H
