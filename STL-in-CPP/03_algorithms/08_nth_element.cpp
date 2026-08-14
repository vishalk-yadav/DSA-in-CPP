#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {7, 2, 9, 1, 6, 4};

    nth_element(v.begin(), v.begin() + 2, v.end());

    cout << "Element in sorted position 2: " << v[2] << '\n';

    for (int x : v) cout << x << ' ';
    cout << '\n';
}
