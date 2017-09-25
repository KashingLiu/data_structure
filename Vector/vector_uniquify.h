//
// Created by Kashingliu on 2017/9/23.
//

#ifndef DATA_STRUCTURE_VECTOR_UNIQUIFY_H
#define DATA_STRUCTURE_VECTOR_UNIQUIFY_H

#include "myVector.h"
template <typename T>
int Vector<T>::uniquify() {
    int i = 0;
    int j = 1;
    for (; j < _size; ++j) {
        if (_elem[i]!=_elem[j])
        {
            _elem[i++] = _elem[j];      //忽略重复的元素，直接把下一个与当前元素不同的目标“添加”至下一个元素，注意到此时i已经+1了
        }
    }
    _size = ++i;                        //当所有的j运行完了之后，i的位置就是数组结束的位置
    shrink();
    return j-i;
}

//一步到位法

#endif //DATA_STRUCTURE_VECTOR_UNIQUIFY_H
