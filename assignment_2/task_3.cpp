#include <iostream>

using namespace std;

int main() {
    char text[5];
    char *pointer = text; // pointer er lik verdien på minneadressen til text[0], altså text[0]
    char search_for = 'e';
    cin >> text; // Leser inn tekst fra bruker som ikke trenger å inneholde e eller være 5 tegn
    // lang.
    while (*pointer != search_for) { // Så lenge verdien på minneadressen til pointer ikke er lik search_for
        *pointer = search_for; // Vi starter på text[0] og setter verdien til search_for
        pointer++; // Vi flytter pointer til neste minneadresse
        cout << pointer << endl; // Skriver ut verdien på minneadressen til pointer
    }

    // Hvis e ikke finnes i teksten, vil pointeren fortsette å øke til den finner et punkt i
    // minne som inneholder e og vi får en stack smashing error.
}