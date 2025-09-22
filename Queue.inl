#include "Queue.h"
#include <stdexcept>

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

    if (is_empty()) {
        throw std::out_of_range("Queue is empty");
    }

    T element = m_arr.get_element(m_front);
    m_front++;
    return element;
}

template <typename T>
bool Queue<T>::is_empty() {
    return m_front > m_rear;
}

template <typename T>
void Queue<T>::clear() {
    arr.resize(0);
    m_front = -1;
    m_rear = 0;
}