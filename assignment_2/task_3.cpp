#include <iostream>

using namespace std;

int main() {
    char text[5];
    char *pointer = text; // pointer er lik minneadressen til text[0]
    char search_for = 'e';
    cin >> text; // Leser inn tekst fra bruker som ikke trenger å inneholde e eller være 5 tegn lang
    while (*pointer != search_for) { // Så lenge verdien på minneadressen til pointer ikke er lik search_for
        *pointer = search_for; // Vi starter på text[0] og setter verdien til search_for
        pointer++; // Vi flytter pointer til neste minneadresse
        cout << pointer << endl; // Skriver ut minneadressen til pointer
    }
    // Hvis e ikke finnes i teksten, pointer bli uendelig og vi får til slutt får vi en stack
    // samshing hvor pointer mest sannsynlig går utenfor stacken.
}