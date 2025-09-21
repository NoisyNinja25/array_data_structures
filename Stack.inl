#include "Stack.h"

template <typename T>
Stack<T>::Stack() {
    m_top = -1;
}


template <typename T>
Stack<T>::Stack(const Stack& stack) {
    m_top = stack.m_top;
    m_arr = stack.m_arr;
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

    if (is_empty()) {
        throw std::out_of_range("Stack is empty");
    }

    T el = m_arr.get_element(m_top);
    m_arr.resize(m_top);
    m_top--;
    return el;
}

template <typename T>
bool Stack<T>::is_empty() {
    return m_arr.get_size() == 0;
}

template <typename T>
void Stack<T>::clear() {
    m_arr.resize(0);
    m_top = -1;
}

template <typename T>
const Stack<T> & Stack<T>::operator = (const Stack & rhs) {

    if (this != &rhs) {
        m_arr = rhs.m_arr;
        m_top = rhs.m_top;
    }
    return *this;

}