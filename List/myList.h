//
// Created by Kashingliu on 2017/9/25.
//

#ifndef DATA_STRUCTURE_MYLIST_H
#define DATA_STRUCTURE_MYLIST_H

#define Posi(T) ListNode<T>*

template <typename T>
struct ListNode {
    T data;
    Posi(T) pred;
    Posi(T) succ;
    ListNode() = default;

};

#endif //DATA_STRUCTURE_MYLIST_H
