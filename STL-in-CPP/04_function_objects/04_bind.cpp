#include <functional>
#include <iostream>
using namespace std;

int subtract(int a, int b) {
    return a - b;
}

int main() {
    using namespace placeholders;

    auto f = bind(subtract, _1, 10);

    cout << f(50) << '\n';
}
