#include "Queue.h"
#include <stdexcept>

#define MAX_MARGIN 5

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

    if (m_front > MAX_MARGIN) {
        shift_to_start_();
    }

    return element;
}

template <typename T>
bool Queue<T>::is_empty() {
    return m_front > m_rear;
}

template <typename T>
unsigned int Queue<T>::get_size() {
    return (m_rear + 1) - m_front;
}

template <typename T>
void Queue<T>::clear() {
    m_arr.resize(0);
    m_front = -1;
    m_rear = 0;
}

template <typename T>
void Queue<T>::shift_to_start_() {
    Array temp = Array<T>(get_size());

    for (int i = 0; i < get_size(); i++) {
        temp[i] = m_arr.get_element(m_front + i);
    }
    m_arr = temp;

    m_front = 0;
    m_rear = m_arr.get_size() - 1;
}