#include <iostream>
#include <fstream>

using namespace std;

void read_temperature(double temperatures[], int length);

int main() {
    int length = 9;
    double temperatures[length];

    int cold = 0;
    int lukewarm = 0;
    int warm = 0;

    read_temperature(temperatures, length);

    for (int i = 0; i < length; ++i) {
        if(temperatures[i] < 10) {
            cold++;
        } else if (temperatures[i] > 20) {
            warm++;
        } else {
            lukewarm++;
        }
    }

    cout << "Kalde: " << cold << "\tLunkne: " << lukewarm << "\tVarme: " << warm << "\n";
}

void read_temperature(double temperatures[], int length) {
    ifstream file("temp_data");
    if (file.is_open()) {
        for (int i = 0; i < length; ++i) {
            file >> temperatures[i];
        }
    } else {
        cout << "Kunne ikke åpne filen\n";
    }

    file.close();
}