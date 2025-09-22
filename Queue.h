#ifndef QUEUE_H
#define QUEUE_H

#include "Array.h"

template <typename T>
class Queue {

    public:

        // Default constructor
        Queue();

        // Copy constructor
        Queue(const Queue & q);

        // Destructor
        ~Queue();

        void enqueue(T el);

        T dequeue();


    private:
        Array<T> m_arr;
        int m_front;
        int m_rear;
        

};

#include "Queue.inl"

#endif

