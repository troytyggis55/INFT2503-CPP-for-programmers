

#include "Set.h"

int main() {
    Set a({1, 2, 3});
    Set b({3, 4, 5});

    Set c = a + b;

    a.print();
    b.print();
    c.print();

    a = a + 10;

    a.print();

    a = a + 3;

    a.print();

    c = a;

    c.print();
}