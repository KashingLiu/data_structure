//
// Created by Kashingliu on 2017/9/20.
//

#ifndef DATA_STRUCTURE_VECTOR_SHRINK_H
#define DATA_STRUCTURE_VECTOR_SHRINK_H

#include "myVector.h"


template <typename T>
void Vector<T>::shrink() {
    if (_capacity < (DEFAULT_CAPACITY << 2) ) { return; }  //如果现有的规模比默认值的2倍还小的话，就不缩小（不致收缩到DEFAULT_CAPACITY以下）
    if ((_size << 2) > _capacity ) { return; }
    T * oldelem = _elem;
    _elem = new T[ _capacity >>= 1 ];
    for (int i = 0; i < _size; ++i) {
        _elem[i] = oldelem[i];
    }
    delete [] oldelem;
}
#endif //DATA_STRUCTURE_VECTOR_SHRINK_H
