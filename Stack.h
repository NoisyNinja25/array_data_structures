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


        /**
         * push an element onto the stack
         * 
         * @param[in] el: the element to be pushed
        */
        void push(T el);


        /**
         * remove and return the top element from the stack
        */
        T pop();

        
        /**
         * test if the stack is empty
         * 
         * @retval true if stack's array size is zero
         * @retval false otherwise
        */
        bool is_empty(); 

        /**
         * remove all elements from the stack
         * resizes the allocation to zero
        */
        void clear();


        /**
         * assignment operator
         * 
         * @param[in] rhs: the stack on the right hand side 
         *                 of the equation
        */
        const Stack & operator = (const Stack & rhs);

    private:
        Array<T> m_arr;
        int m_top;
};

#include "Stack.inl"

#endif