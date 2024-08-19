#include <iostream>

using namespace std;

int main() {
    int i = 3;
    int j = 5;
    int *p = &i; // p er en peker til i
    int *q = &j; // q er en peker til j

    cout << "i address: " << &i << " value: " << i << endl;
    cout << "j address: " << &j << " value: " << j << endl;
    cout << "p address: " << &p << " value: " << p << " point to: " << *p << endl;
    cout << "q address: " << &q << " value: " << q << " point to: " << *q << endl << endl;

    *p = 7; // Vi derefererer p som gir oss i, og setter verdien til 7

    cout << "i address: " << &i << " value: " << i << endl;
    cout << "p address: " << &p << " value: " << p << " point to: " << *p << endl << endl;

    *q += 4; // Vi derefererer q som gir oss j, og legger til 4

    cout << "j address: " << &j << " value: " << j << endl;
    cout << "q address: " << &q << " value: " << q << " point to: " << *q << endl << endl;

    *q = *p + 1; // Vi derefererer q som gir oss j, og setter verdien til i + 1

    cout << "i address: " << &i << " value: " << i << endl;
    cout << "j address: " << &j << " value: " << j << endl;
    cout << "p address: " << &p << " value: " << p << " point to: " << *p << endl;
    cout << "q address: " << &q << " value: " << q << " point to: " << *q << endl << endl;

    p = q; // Vi setter p til å peke på samme minneadresse som q

    cout << "i address: " << &i << " value: " << i << endl;
    cout << "j address: " << &j << " value: " << j << endl;
    cout << "p address: " << &p << " value: " << p << " point to: " << *p << endl;
    cout << "q address: " << &q << " value: " << q << " point to: " << *q << endl << endl;
}
