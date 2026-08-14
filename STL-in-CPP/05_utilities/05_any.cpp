#include <any>
#include <iostream>
#include <string>
using namespace std;

int main() {
    any value = 42;

    cout << any_cast<int>(value) << '\n';

    value = string("Hello STL");
    cout << any_cast<string>(value) << '\n';
}
