#include <iostream>

using namespace std;

int main() {
    const int length = 5;

    int cold = 0;
    int lukewarm = 0;
    int warm = 0;

    cout << "Du skal skrive inn 5 temperaturer. \n";

    for (int i = 0; i < length; ++i) {
        int temp = 0;

        cout << "Temperatur nr " << i + 1 << "\t";
        cin >> temp;
        cin.get();

        if (temp < 10) {
            cold++;
        } else if (temp > 20) {
            warm++;
        } else {
            lukewarm++;
        }
    }

    cout << "Kalde: " << cold << "\tLunkne: " << lukewarm << "\tVarme: " << warm << "\n";
}