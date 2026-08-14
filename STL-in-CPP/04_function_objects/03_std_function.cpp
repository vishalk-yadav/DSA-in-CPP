#include <functional>
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    function<int(int, int)> f = add;
    cout << f(10, 20) << '\n';

    f = [](int a, int b) { return a * b; };
    cout << f(10, 20) << '\n';
}
