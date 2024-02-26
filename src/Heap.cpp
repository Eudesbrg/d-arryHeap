#include "../header/Heap.h"
#include <algorithm>

// constructor 
template <typename T>
Heap<T>::Heap(int capacity): capacity {capacity} {data = new T[capacity];}

template <typename T>
Heap<T>::Heap(int capacity, int dimension) : Heap(capacity), dimension{dimension} {}

template <typename T>
Heap<T>::Heap(std::iterator_traits<T> start, std::iterator_traits<T> end, int dimension = 2) : Heap(std::distance(start,end),dimension) {
    // fill the heap array
    for (std::size_t i = 0; i < capacity && i != ; i++)
        data[i] = *(start + i);

    // build the heap data structure

    
}

template <typename T>
Heap<T>::~Heap() {delete[] m_data;}

template <typename T>
int Heap<T>::capacity() {return m_capacity;}

template <typename T>
int Heap<T>::heapSize() {return m_heapSize;}

template <typename T>
int Heap<T>::dimension() {return m_dimension;}

template <typename T>
int Heap<T>::parent(unsigned int index) {
    return ((index + m_dimension - 2) / m_dimension) - 1;
}

template <typename T>
int Heap<T>::child(unsigned int index, unsigned int position) {
    return m_dimension * (index - 1) + position
}

template <typename T>
int Heap<T>::handles(T *object) {
    for (int i = 0; i < m_heapSize; i++)
    {
        if(object = m_data + i)
            return i;
    }
    return -1;
    
}