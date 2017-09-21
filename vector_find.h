//
// Created by Kashingliu on 2017/9/21.
//

#ifndef DATA_STRUCTURE_VECTOR_FIND_H
#define DATA_STRUCTURE_VECTOR_FIND_H

#include "myVector.h"

template <typename T>
Rank Vector<T>::find(T const &e, Rank lo, Rank hi) {
    while ((lo < hi--) && (e!=_elem[hi]));
    return hi;
//    int i = hi;
//    for (i; i > lo; --i) {
//        if (e == _elem[i])
//        {
//            return i;
//        }
//    }
}
#endif //DATA_STRUCTURE_VECTOR_FIND_H
