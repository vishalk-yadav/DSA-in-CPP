#include <numeric>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};

    vector<int> prefix(4);
    partial_sum(v.begin(), v.end(), prefix.begin());

    cout << "prefix: ";
    for (int x : prefix) cout << x << ' ';
    cout << '\n';

    vector<int> diff(4);
    adjacent_difference(v.begin(), v.end(), diff.begin());

    cout << "difference: ";
    for (int x : diff) cout << x << ' ';
    cout << '\n';
}
