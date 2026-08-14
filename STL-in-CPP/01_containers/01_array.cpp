#include <array>
#include <iostream>
using namespace std;

int main() {
    array<int, 5> a = {10, 20, 30, 40, 50};

    cout << "Size: " << a.size() << '\n';
    cout << "First: " << a.front() << '\n';
    cout << "Last: " << a.back() << '\n';

    a.at(2) = 99;

    for (int x : a) cout << x << ' ';
    cout << '\n';
}
