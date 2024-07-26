//
// Created by Trygve Jørgensen on 26.07.2024.
//

#ifndef ASSIGNMENT_8_PAIR_H
#define ASSIGNMENT_8_PAIR_H

template <typename T, typename U>
class Pair {
public:
    T first;
    U second;
    Pair(T first, U second);
    Pair operator+(const Pair &other) const;
    bool operator>(const Pair &other) const;
};


#endif //ASSIGNMENT_8_PAIR_H
