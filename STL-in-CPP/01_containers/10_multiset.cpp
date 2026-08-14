#include <set>
#include <iostream>
using namespace std;

int main() {
    multiset<int> ms = {1, 2, 2, 2, 3, 4};

    cout << "Count of 2: " << ms.count(2) << '\n';

    auto [first, last] = ms.equal_range(2);
    for (auto it = first; it != last; ++it)
        cout << *it << ' ';
    cout << '\n';
}
