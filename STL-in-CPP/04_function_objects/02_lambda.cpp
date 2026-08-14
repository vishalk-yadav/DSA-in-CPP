#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    sort(v.begin(), v.end(), [](int a, int b) {
        return a > b;
    });

    for_each(v.begin(), v.end(), [](int x) {
        cout << x << ' ';
    });
    cout << '\n';
}
