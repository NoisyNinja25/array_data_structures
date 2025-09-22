#include "Queue.h"

template <typename T>
Queue<T>::Queue() {
    m_front = 0;
    m_rear = -1;
}

template <typename T>
Queue<T>::~Queue() {

}

template <typename T>
void Queue<T>::enqueue(T el) {
    m_rear++;
    m_arr.resize(m_rear + 1);
    m_arr.set_element(m_rear, el);
}

template <typename T>
T Queue<T>::dequeue() {
    T element = m_arr.get_element(m_front);
    m_front++;
    return element;
}