#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5, 1, 4, 2, 3};

    ranges::sort(v);

    for (int x : v) cout << x << ' ';
    cout << '\n';
}
