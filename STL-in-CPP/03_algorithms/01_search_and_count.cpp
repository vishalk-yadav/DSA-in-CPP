#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1, 2, 2, 4, 5, 2};

    auto it = find(v.begin(), v.end(), 4);
    if (it != v.end()) cout << "Found 4\n";

    cout << "Count 2 = " << count(v.begin(), v.end(), 2) << '\n';
    cout << "Even count = "
         << count_if(v.begin(), v.end(), [](int x) { return x % 2 == 0; })
         << '\n';
}
