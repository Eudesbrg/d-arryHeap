#ifndef HEAP__H
#define HEAP__H

#include <iterator>
#include <stdexcept>

template <typename T>
class Heap {
    private:
        std::size_t m_capacity = 0;
        unsigned int m_dimension = 2;
    protected:
        std::size_t m_heapSize = 0;
        T *m_data = nullptr;

    public:
        // constructor
        Heap(std::iterator_traits<T>, std::iterator_traits<T>, int);
        Heap(int, int);
        Heap(int);
        Heap() = delete;

        int parent(unsigned int);
        int child(unsigned int, unsigned int);

        virtual void heapify(unsigned int) = 0;
        virtual void buildHeap() = 0;

        // accessor
        int heapSize();
        int capacity();
        int dimension();

        int handles(T *object);


        ~Heap();


};

#endif