#include <iostream>

using namespace std;

int main() {
    double number = 3.14;
    double *p_number = &number; // Peker til number
    double &r_number = number; // Referanse til number

    cout << number << endl;
    cout << *p_number << endl;
    cout << r_number << endl;
}