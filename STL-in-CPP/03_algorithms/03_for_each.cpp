#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};

    for_each(v.begin(), v.end(), [](int& x) {
        x *= 10;
    });

    for (int x : v) cout << x << ' ';
    cout << '\n';
}
