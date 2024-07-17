#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<double> numbers = {1.0, 2.2, 3.4, 4.2, 5.9};

    cout << "Front: " << numbers.front() << " Back: " << numbers.back() << endl;

    numbers.emplace(numbers.begin() + 1, 6.9);

    cout << "Front: " << numbers.front() << endl;

    auto found_value = find(numbers.begin(), numbers.end(), 4.2);

    if (found_value != numbers.end()) {
        cout << "Found value: " << *found_value << endl;
    } else {
        cout << "Value not found" << endl;
    }
}
