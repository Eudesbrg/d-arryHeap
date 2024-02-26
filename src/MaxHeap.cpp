#include "../header/MaxHeap.h"
#include <stdexcept>
#include <algorithm>

template <typename T>
void MaxHeap<T>::heapify(unsigned int index) {
    //set the largest to the current index
    unsigned int largest = index;

    //search for the largest between the children
    for(int i = 0; i < dimension(); i++) {
        int myChild = child(index, i + 1);
        if(myChild < heapSize() && data[myChild].key > data[largest].key)
            largest = myChild;
    }

    if (largest != index) {
        std::swap(data[index], data[largest]);
        heapify(largest);
    }
}

template <typename T>
void MaxHeap<T>::buildHeap() {
    for (int i = (heapSize() / dimension()) - 1; i > -1 ; i--)
        heapify(i);   
}

template <typename T>
T MaxHeap<T>::maximum() {return data[0];}

template <typename T>
T MaxHeap<T>::extractMaximum() {
    T max = maximum();

    std::swap(m_data[0], m_data[heapSize() - 1]);

    heapify(0);
}

template <typename T>
void MaxHeap<T>::increaseKey(T *obj, int key) {
    if (!(obj.key < key))
        throw std::invalid_argument("The key should be grether than the object key")

    // find the index of the key in the heap array
    int index = handles(obj);

    if (index == -1)
        throw std::invalid_argument("This object is not in the heap");

    // increase the object key
    obj->key = key;

    // upward this object to the right place
    int objParent = parent(index);
    while (!(objParent < 0) && m_data[index].key > m_data[objParent].key)
    {
        std::swap(m_data[index],m_data[objParent]);
        index = objParent;
        objParent = parent(index);
    }
     
}

template <typename T>
void MaxHeap<T>::insertElement(T *obj) {

}