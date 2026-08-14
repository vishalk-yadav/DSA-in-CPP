#include <algorithm>
#include <random>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    reverse(v.begin(), v.end());
    rotate(v.begin(), v.begin() + 2, v.end());

    mt19937 rng(42);
    shuffle(v.begin(), v.end(), rng);

    for (int x : v) cout << x << ' ';
    cout << '\n';
}
