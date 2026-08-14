#include <variant>
#include <iostream>
#include <string>
using namespace std;

int main() {
    variant<int, double, string> data = "hello";

    cout << get<string>(data) << '\n';

    data = 42;
    cout << get<int>(data) << '\n';

    visit([](const auto& value) {
        cout << value << '\n';
    }, data);
}
