//
// Created by Trygve Jørgensen on 22.07.2024.
//

#include "Set.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

Set::Set() {
    set = vector<int>();
}

Set::Set(const vector<int> &set) {
    this->set = set;
}

Set Set::operator+(const Set &other) const {
    Set new_set(set);
    for (size_t i = 0; i < other.set.size(); i++) {
        if (find(set.begin(), set.end(), other.set[i]) == set.end()) {
            new_set.set.push_back(other.set[i]);
        }
    }
    return new_set;
}

Set &Set::operator+(int integer) {
    if (find(set.begin(), set.end(), integer) == set.end()) {
        set.push_back(integer);
    }
    return *this;
}

Set &Set::operator=(const Set &other) {
    set = other.set;
    return *this;
}

void Set::print() const {
    for (size_t i = 0; i < set.size(); i++) {
        cout << set[i] << " ";
    }
    cout << endl;
}