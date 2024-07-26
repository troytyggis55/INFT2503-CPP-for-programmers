#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
    vector<int> v2 = {2, 3, 12, 14, 24};

    auto is_larger_than_15 = [](int i) { return i > 15; };
    auto result_1 = find_if(v1.begin(), v1.end(), is_larger_than_15);
    cout << "First element larger than 15: " << *result_1 << endl;

    auto about_equal = [](int a, int b) { return a - b < 3 && a - b > -3; };

    auto result_2 = equal(v1.begin(), v1.begin() + 5, v2.begin(), about_equal);
    auto result_3 = equal(v1.begin(), v1.begin() + 4, v2.begin(), about_equal);
    cout << "First 5 elements are about equal: " << result_2 << endl;
    cout << "First 4 elements are about equal: " << result_3 << endl;

    cout << "Before: ";
    for (int i : v1)
        cout << i << " ";
    cout << endl;

    auto is_odd = [](int i) { return i % 2 != 0; };
    replace_copy_if(v1.begin(), v1.end(), v1.begin(), is_odd, 100);

    cout << "Odd numbers replaced with 100: ";
    for (int i : v1)
        cout << i << " ";
    cout << endl;
}
