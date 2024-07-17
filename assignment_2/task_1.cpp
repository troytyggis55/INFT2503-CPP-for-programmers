#include <iostream>

using namespace std;

int main() {
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    cout << "i address: " << &i << " value: " << i << endl;
    cout << "j address: " << &j << " value: " << j << endl;
    cout << "p address: " << &p << " value: " << p << " point to: " << *p << endl;
    cout << "q address: " << &q << " value: " << q << " point to: " << *q << endl << endl;

    *p = 7;

    cout << "i address: " << &i << " value: " << i << endl;
    cout << "p address: " << &p << " value: " << p << " point to: " << *p << endl << endl;

    *q += 4;

    cout << "j address: " << &j << " value: " << j << endl;
    cout << "q address: " << &q << " value: " << q << " point to: " << *q << endl << endl;

    *q = *p + 1;

    cout << "i address: " << &i << " value: " << i << endl;
    cout << "j address: " << &j << " value: " << j << endl;
    cout << "p address: " << &p << " value: " << p << " point to: " << *p << endl;
    cout << "q address: " << &q << " value: " << q << " point to: " << *q << endl << endl;

    p = q;

    cout << "i address: " << &i << " value: " << i << endl;
    cout << "j address: " << &j << " value: " << j << endl;
    cout << "p address: " << &p << " value: " << p << " point to: " << *p << endl;
    cout << "q address: " << &q << " value: " << q << " point to: " << *q << endl << endl;

}
