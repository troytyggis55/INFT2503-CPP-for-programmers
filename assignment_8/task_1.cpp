#include <iostream>

using namespace std;

template <typename Type>
bool equal(Type a, Type b) {
    cout << "Template ";
    return a == b;
}

bool equal(double a, double b) {
    cout << "Double ";
    return a - b < 0.01 && a - b > -0.01;
}

int main() {
    int int_a = 1;
    int int_b = 2;
    if (equal(int_a, int_b)) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }

    double double_a = 1.0;
    double double_b = 1.005;
    double double_c = 1.02;
    if (equal(double_a, double_b)) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }

    if (equal(double_a, double_c)) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }
}
