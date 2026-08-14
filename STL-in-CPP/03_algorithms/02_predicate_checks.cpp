#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {2, 4, 6, 8};

    cout << boolalpha;
    cout << "all even = " << all_of(v.begin(), v.end(), [](int x) {
        return x % 2 == 0;
    }) << '\n';

    cout << "any > 7 = " << any_of(v.begin(), v.end(), [](int x) {
        return x > 7;
    }) << '\n';

    cout << "none negative = " << none_of(v.begin(), v.end(), [](int x) {
        return x < 0;
    }) << '\n';
}
