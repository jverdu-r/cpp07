/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <jverdu-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 16:31:37 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/11/14 17:46:49 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <stdexcept>

template<typename T>
class Array {
private:
    T* elements;
    unsigned int len;

public:

    Array() : elements(NULL), len(0) {}

    Array(unsigned int n) : elements(new T[n]()), len(n) {}

    Array(const Array& other) : elements(new T[other.len]), len(other.len) {
        for (unsigned int i = 0; i < len; i++) {
            elements[i] = other.elements[i];
        }
    }

    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] elements;

            len = other.len;
            elements = new T[len];
            for (unsigned int i = 0; i < len; i++) {
                elements[i] = other.elements[i];
            }
        }
        return *this;
    }

    T& operator[](unsigned int index) {
        if (index >= len) {
            throw std::out_of_range("Index is out of range");
        }
        return elements[index];
    }

    const T& operator[](unsigned int index) const {
        if (index >= len) {
            throw std::out_of_range("Index is out of range");
        }
        return elements[index];
    }

    unsigned int size() const {
        return len;
    }

    ~Array() {
        delete[] elements;
    }
};
#endif