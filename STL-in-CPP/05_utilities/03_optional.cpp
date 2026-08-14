#include <optional>
#include <iostream>
using namespace std;

optional<int> divide(int a, int b) {
    if (b == 0) return nullopt;
    return a / b;
}

int main() {
    auto result = divide(10, 2);

    if (result.has_value())
        cout << result.value() << '\n';

    auto missing = divide(10, 0);
    cout << missing.value_or(-1) << '\n';
}
