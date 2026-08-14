#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {5, 1, 4, 2, 3};

    sort(v.begin(), v.end());

    stable_sort(v.begin(), v.end());

    partial_sort(v.begin(), v.begin() + 3, v.end());

    for (int x : v) cout << x << ' ';
    cout << '\n';
}
