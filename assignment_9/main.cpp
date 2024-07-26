#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    vector<int> v2 = {2, 3, 12, 14, 24};

    auto is_larger_than_15 = [](int i) { return i > 15; };

    auto result = find_if(v1.begin(), v1.end(), is_larger_than_15);

    cout << "First element larger than 15: " << *result << endl;
}
