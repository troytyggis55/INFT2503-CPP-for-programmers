//
// Created by Trygve Jørgensen on 26.07.2024.
//

#include "Pair.h"

template <typename T, typename U>
Pair<T, U>::Pair(T first, U second) {
    this->first = first;
    this->second = second;
}

template <typename T, typename U>
Pair<T, U> Pair<T, U>::operator+(const Pair &other) const {
    return Pair(first + other.first, second + other.second);
}

template <typename T, typename U>
bool Pair<T, U>::operator>(const Pair &other) const {
    return first + second > other.first + other.second;
}

