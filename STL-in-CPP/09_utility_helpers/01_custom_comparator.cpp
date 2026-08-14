#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

bool byAbsoluteValue(int a, int b) {
    return abs(a) < abs(b);
}

int main() {
    vector<int> v = {-10, 2, -3, 1, 5};

    sort(v.begin(), v.end(), byAbsoluteValue);

    for (int x : v) cout << x << ' ';
    cout << '\n';
}
