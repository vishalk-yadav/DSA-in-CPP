#include <numeric>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v(5);

    iota(v.begin(), v.end(), 1);

    int sum = accumulate(v.begin(), v.end(), 0);

    cout << "sum = " << sum << '\n';
    for (int x : v) cout << x << ' ';
    cout << '\n';
}
