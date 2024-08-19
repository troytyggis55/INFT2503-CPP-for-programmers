#include <iostream>

using namespace std;

int main() {
    string word1, word2, word3;

    cout << "Skriv inn tre ord: ";
    cin >> word1 >> word2 >> word3;

    string sentence = word1 + " " + word2 + " " + word3 + ".";

    cout << "Lengde: " << endl;
    cout << word1 << " " << word1.length() << endl;
    cout << word2 << " " << word2.length() << endl;
    cout << word3 << " " << word3.length() << endl;
    cout << sentence << " " << sentence.length() << endl << endl;

    string sentence2 = sentence;

    sentence2.replace(9, 3, "xxx");

    cout << "Erstattet med x:" << endl;
    cout << sentence << "\n" << sentence2 << endl << endl;

    string sentence_start = sentence.substr(0, 5);

    cout << "Starten av setningen:" << endl;
    cout << sentence << "\n" << sentence_start << endl << endl;

    cout << "Inneholder setningen 'hello'?" << endl;
    cout << ((sentence.find("hello") != string::npos) ? "Ja" : "Nei") << endl << endl;

    cout << "Hvor er 'er'?" << endl;
    int found_index = -1;
    bool found = false;
    do {
        found_index = sentence.find("er", found_index + 1);
        if (found_index != string::npos) {
            cout << found_index << endl;
            found = true;
        }
    } while (found_index != string::npos);

    if (!found) {
        cout << "Fant ikke 'er'" << endl;
    }
}