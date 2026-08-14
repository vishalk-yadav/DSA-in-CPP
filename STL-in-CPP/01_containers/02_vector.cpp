#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    v.push_back(40);
    v.emplace_back(50);
    v.pop_back();

    cout << "size = " << v.size() << '\n';
    cout << "capacity = " << v.capacity() << '\n';

    v.insert(v.begin() + 1, 99);
    v.erase(v.begin() + 2);

    for (int x : v) cout << x << ' ';
    cout << '\n';
}
