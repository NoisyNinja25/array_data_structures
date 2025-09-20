#ifndef STACK_H
#define STACK_H

#include "Array.h"

template <typename T>
class Stack : public Array<T> {
    public:
        
        // Default constructor
        Stack();


        // Copy constructor
        Stack(const Stack& s);


        // Destructor
        ~Stack();


        void push(T el);


        T pop();

        
        bool is_empty(); 

        
        void clear();


        void shrink();


        const Stack & operator = (const Stack & rhs);

    private:
        Array<T> m_arr;
        int m_top;
};

#include "Stack.inl"

#endif