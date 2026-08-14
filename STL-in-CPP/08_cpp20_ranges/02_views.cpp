#include <iostream>
#include <ranges>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

    auto even = v
        | views::filter([](int x) { return x % 2 == 0; })
        | views::transform([](int x) { return x * x; });

    for (int x : even) cout << x << ' ';
    cout << '\n';
}
