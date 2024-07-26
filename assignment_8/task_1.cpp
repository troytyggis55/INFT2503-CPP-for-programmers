#include <iostream>

using namespace std;

template <typename Type>
bool equal(Type a, Type b) {
    cout << "Generic" << endl;
    return a == b;
}

bool equal(double a, double b) {
    cout << "Double" << endl;
    return a - b < 0.01 && a - b > -0.01;
}

int main() {
    int int_a = 1;
    int int_b = 2;
    cout << equal(int_a, int_b) << endl;

    double double_a = 1.0;
    double double_b = 1.005;
    double double_c = 1.02;
    cout << equal(double_a, double_b) << endl;
    cout << equal(double_a, double_c) << endl;
}
