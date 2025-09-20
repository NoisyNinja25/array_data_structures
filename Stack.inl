#include "Stack.h"

template <typename T>
Stack<T>::Stack() {
    m_top = -1;
}


template <typename T>
Stack<T>::Stack(const Stack& stack) {
    // do this later
}


template <typename T>
Stack<T>::~Stack() {

}


template <typename T>
void Stack<T>::push(T el) {
    m_arr.resize(m_arr.get_size() + 1);
    m_top++;
    m_arr.set_element(m_top, el);
}


template <typename T>
T Stack<T>::pop() {
    T el = m_arr.get_element(m_top);
    m_arr.resize(m_top);
    m_top--;
    return el;
}

