#include <set>
#include <iostream>
using namespace std;

int main() {
    set<int> s = {5, 1, 3, 3, 2};

    s.insert(4);
    s.erase(3);

    cout << "Contains 4: " << s.count(4) << '\n';

    auto it = s.find(2);
    if (it != s.end()) cout << "Found: " << *it << '\n';

    for (int x : s) cout << x << ' ';
    cout << '\n';
}
