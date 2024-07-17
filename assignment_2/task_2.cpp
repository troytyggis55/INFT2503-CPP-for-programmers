#include <cstring>

using namespace std;

int main() {
    char *line = nullptr; // Vi peker til minneadresse 0
    strcpy(line, "Dette er en tekst"); // Vi prøver å kopiere en tekst til minneadressen 0
    // Vi får feilkode 11, også kalt "segmentation fault" som er OS sin måte å si at programmet prøver å aksessere minne som ikke er tildelt programmet
}