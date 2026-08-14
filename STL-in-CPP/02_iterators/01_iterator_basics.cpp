#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    auto it = v.begin();
    cout << *it << '\n';

    ++it;
    cout << *it << '\n';

    for (auto i = v.begin(); i != v.end(); ++i)
        cout << *i << ' ';
    cout << '\n';

    for (auto rit = v.rbegin(); rit != v.rend(); ++rit)
        cout << *rit << ' ';
    cout << '\n';
}
