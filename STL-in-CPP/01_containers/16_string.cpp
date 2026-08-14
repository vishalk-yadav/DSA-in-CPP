#include <string>
#include <iostream>
using namespace std;

int main() {
    string s = "hello";
    s += " world";

    cout << s << '\n';
    cout << "length = " << s.size() << '\n';
    cout << "substring = " << s.substr(0, 5) << '\n';

    auto pos = s.find("world");
    if (pos != string::npos)
        cout << "world starts at " << pos << '\n';
}
