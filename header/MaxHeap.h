#ifndef MAXHEAP___H
#define MAXHEAP___H

#include "./Heap.h"

template <typename T>
class MaxHeap: protected Heap {
    void heapify(unsigned int);
    void buildHeap();

    T maximum();
    T extractMaximum();
    void increaseKey(T*, int);
    void insertElement(T*);
    void deleteElement(unsigned int);

};

#endif