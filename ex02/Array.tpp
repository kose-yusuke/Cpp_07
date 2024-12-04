/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:51:54 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/12/04 22:23:14 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

template<typename T>
Array<T>::Array() : data(NULL), array_size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : array_size(n) {
    data = new T[n]();
}

template<typename T>
Array<T>::Array(Array const &other) : array_size(other.array_size) {
    data = new T[array_size];
    for (unsigned int i = 0; i < array_size; ++i){
        data[i] = other.data[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(Array const &other) {
    if (this != &other) {
        delete[] data;
        array_size = other.array_size;
        data = new T[array_size];
        for (unsigned int i = 0; i < array_size; ++i) {
            data[i] = other.data[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] data;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= array_size){
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= array_size) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return array_size;
}