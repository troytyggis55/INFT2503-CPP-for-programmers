#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<double> numbers = {1.0, 2.2, 3.4, 4.2, 5.9};

    cout << "Front: " << numbers.front() << " Back: " << numbers.back() << endl;

    numbers.emplace(6.9);
}
