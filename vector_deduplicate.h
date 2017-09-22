//
// Created by Kashingliu on 2017/9/22.
//

#ifndef DATA_STRUCTURE_VECTOR_DEDUPLICATE_H
#define DATA_STRUCTURE_VECTOR_DEDUPLICATE_H

#include "myVector.h"

template <typename T>
int Vector<T>::deduplicate() {
    int oldSize = _size;        //记录原来的元素个数
    Rank i = 1;                 //从1开始查找
    while (i < _size)
    {
        if (find(_elem[i],0,i) < 0)     //从前缀中查找
        {
            i++;                        //如果没找到就继续i++查找下一个
        } else {
            remove(i);                  //如果找到了就删除当前的元素
        }
    }

//    while (i < _size)
//        (find(_elem[i],0,i)<0) ?
//            i++ :
//            remove(i);

    return oldSize-_size;               //返回值是删除的元素的个数，也就是原来的个数-现在的个数
}

#endif //DATA_STRUCTURE_VECTOR_DEDUPLICATE_H
