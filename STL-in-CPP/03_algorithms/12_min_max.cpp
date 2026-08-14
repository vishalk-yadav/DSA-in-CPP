#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {8, 2, 9, 4, 1};

    cout << "min = " << *min_element(v.begin(), v.end()) << '\n';
    cout << "max = " << *max_element(v.begin(), v.end()) << '\n';

    auto [mn, mx] = minmax_element(v.begin(), v.end());
    cout << "minmax = " << *mn << " " << *mx << '\n';
}
