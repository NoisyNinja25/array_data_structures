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

        /**
         * add an element to the queue
         * 
         * @param[in] el: the element to be added
        */
        void enqueue(T el);

        /**
         * remove element from start of queue
         * 
         * @returns: the element from the front of the queue
         * @throws out of range: if the queue is empty
        */
        T dequeue();

        /**
         * return true if the queue is empty, false otherwise
        */
        bool is_empty();

        /**
         * remove all elements from the queue
        */
        void clear();


    private:
        Array<T> m_arr;
        int m_front;
        int m_rear;
        

};

#include "Queue.inl"

#endif

