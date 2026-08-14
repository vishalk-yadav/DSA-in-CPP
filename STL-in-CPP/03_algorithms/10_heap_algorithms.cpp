#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {4, 1, 7, 3, 8, 5};

    make_heap(v.begin(), v.end());
    cout << "heap top = " << v.front() << '\n';

    v.push_back(10);
    push_heap(v.begin(), v.end());

    pop_heap(v.begin(), v.end());
    cout << "removed = " << v.back() << '\n';
    v.pop_back();

    sort_heap(v.begin(), v.end());

    for (int x : v) cout << x << ' ';
    cout << '\n';
}
