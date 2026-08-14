#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v(5);

    fill(v.begin(), v.end(), 7);

    replace(v.begin(), v.end(), 7, 9);

    vector<int> copied(5);
    copy(v.begin(), v.end(), copied.begin());

    for (int x : copied) cout << x << ' ';
    cout << '\n';
}
