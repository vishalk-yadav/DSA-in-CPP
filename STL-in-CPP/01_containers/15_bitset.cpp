#include <bitset>
#include <iostream>
using namespace std;

int main() {
    bitset<8> b(string("10110100"));

    cout << b << '\n';
    cout << "bit 2 = " << b[2] << '\n';

    b.set(0);
    b.reset(2);
    b.flip();

    cout << b << '\n';
    cout << "count = " << b.count() << '\n';
    cout << "any = " << b.any() << '\n';
    cout << "none = " << b.none() << '\n';
}
