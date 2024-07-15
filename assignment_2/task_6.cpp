#include <iostream>

using namespace std;

int find_sum(const int *table, int length) {
    int sum = 0;

    for (int i = 0; i < length; ++i) {
        sum += *(table + i);
    }
    return sum;
}

int main() {
    const int length = 3;
    int table[length] = {1, 2, 3};

    cout << find_sum(table, length) << endl;
}