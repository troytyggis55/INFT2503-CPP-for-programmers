//
// Created by Trygve Jørgensen on 22.07.2024.
//

#ifndef ASSIGNMENT_7_SET_H
#define ASSIGNMENT_7_SET_H

#include <vector>

using namespace std;

class Set {
public:
    vector<int> set;
    Set();
    Set(const Set& other);
    Set(const vector<int> &set);
    Set operator+(const Set &other) const;
    Set &operator+(int integer);
    Set &operator=(const Set &other);
    void print() const;
};


#endif //ASSIGNMENT_7_SET_H
