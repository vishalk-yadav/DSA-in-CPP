#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 4, 6, 8};

    cout << boolalpha;
    cout << binary_search(v.begin(), v.end(), 4) << '\n';

    auto lb = lower_bound(v.begin(), v.end(), 2);
    auto ub = upper_bound(v.begin(), v.end(), 2);

    cout << "lower_bound index = " << (lb - v.begin()) << '\n';
    cout << "upper_bound index = " << (ub - v.begin()) << '\n';

    auto [first, last] = equal_range(v.begin(), v.end(), 2);
    cout << "frequency = " << (last - first) << '\n';
}
