#include <map>
#include <iostream>
using namespace std;

int main() {
    multimap<string, int> mm;

    mm.insert({"Math", 90});
    mm.insert({"Math", 95});
    mm.insert({"Physics", 88});

    auto [first, last] = mm.equal_range("Math");

    for (auto it = first; it != last; ++it)
        cout << it->first << " -> " << it->second << '\n';
}
