#include <iostream>

using namespace std;

int main() {
    /*
    int a = 5;
    int &b; // Kan ikke ha en referanse uten å initialisere den
    int *c; // Bør initialiseres til nullptr
    c = &b; // Kan ikke sette en peker til en referanse
    *a = *b + *c; // a er en int, b er en int-referanse og c er en int-peker
    &b = 2; // Kan ikke endre verdien til en referanse
    */

    int a = 5;
    int &b = a;
    int *c;
    c = &b;
    a = b + *c;
    cout << "a: " << a << " address: " << &a << endl;
    cout << "b: " << b << " address: " << &b << endl;
    cout << "c: " << c << " address: " << &c << " point to: " << *c << endl;
}