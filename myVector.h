//
// Created by Kashingliu on 2017/9/19.
//

#ifndef DATA_STRUCTURE_MYVECTOR_H
#define DATA_STRUCTURE_MYVECTOR_H

typedef int Rank;  //秩
Rank rank = 100;
#define DEFAULT_CAPACITY 3          //初始容量为3

template <typename T>       //定义了一个模板类，模板的类型名称是T，在下面这个类中用T来表示类型的名字
class Vector
{
private:
    Rank _size;         //向量的规模，向量的内部实际一共有多少个元素，也即实际规模，_表示私有
    int _capacity;      //向量的容量，不一定和size相同，有可能比实际的规模稍微大一些
    T* _elem;           //记录数据用的
protected:
    void copyFrom(T const* A, Rank lo, Rank hi);
    void expand();
    void shrink();
public:
//    //默认初始化//这个构造函数与下面那个不能同时使用，但是鉴于下面那个可以描述第一个，所以只用第二个了
//    Vector(int c)        //指定初始的容量，若未指定则为DEFAULT_CAPACITY
//    { _elem = new T[_capacity = c];       //申请一段长度为c，类型为T的连续的储存空间，并把首地址交给_elem
//      _size = 0;}                          //实际长度是0

    T& operator[] ( Rank r );    //这是重载[]运算符，通过下标访问值的函数，其中的函数体只能在.h文件里写

    Vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0)     //    s为规模，v为初始化成什么值
    {
        _elem = new T[_capacity = c];
        for ( _size = 0; _size < s; _elem[_size++] = v );
//        for (int _size = 0; _size < s; ++_size)
//        {
//            _elem[_size] = v;
//        }
    }
    //对数组A完全拷贝
    Vector(T const* A, Rank n) { copyFrom(A,0,n); }
    //对数组A从lo到hi拷贝
    Vector(T const* A, Rank lo, Rank hi) { copyFrom(A,lo,hi); }
    //对向量V完全复制
    Vector(Vector <T> const& V) { copyFrom(V._elem, 0, V._size); }
    //对向量V从lo到hi复制
    Vector(Vector <T> const& V, Rank lo, Rank hi) { copyFrom(V._elem, lo, hi); }
    //析构函数
    ~Vector()
    {
        delete [] _elem;
    }
    int insert(int r, T const& e);
    int remove(int lo, int hi);
};



#include "vector_call_by_rank.h"
#include "vector_insert.h"
#include "vector_expand.h"
#include "vector_copyfrom.h"
#include "vector_remove.h"
#include "vector_shrink.h"

#endif //DATA_STRUCTURE_MYVECTOR_H
