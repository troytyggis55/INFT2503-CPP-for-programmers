#include <iostream>

using namespace std;

int main() {
    /*
    int a = 5;
    int &b; // Kan ikke ha en referanse uten å initialisere den
    int *c; // Bør initialiseres til nullptr
    c = &b; // Kan ikke sette en peker til en referanse som ikke er satt
    *a = *b + *c; // a er en int, b er en int-referanse og c er en int-peker
    &b = 2; // Kan ikke endre verdien til en referanse, bare det den refererer til
    */

    int a = 5;
    int &b = a;
    int *c;
    c = &b;
    a = b + *c;
    cout << "a: " << a << "\ta&: " << &a << endl;
    cout << "b: " << b << "\tb&: " << &b << endl;
    cout << "c: " << c << "\tc&: " << &c << "\tc*: " << *c << endl;
}