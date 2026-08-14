#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 3, 3, 4};

    v.erase(remove(v.begin(), v.end(), 2), v.end());

    v.erase(unique(v.begin(), v.end()), v.end());

    for (int x : v) cout << x << ' ';
    cout << '\n';
}
