//
// Created by Kashingliu on 2017/9/19.
//

#ifndef DATA_STRUCTURE_VECTOR_CALL_BY_RANK_H
#define DATA_STRUCTURE_VECTOR_CALL_BY_RANK_H


#include "myVector.h"
template <typename T>
T & Vector<T>::operator[](Rank r) {
    return _elem[r];
}

#endif //DATA_STRUCTURE_VECTOR_CALL_BY_RANK_H
