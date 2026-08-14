#include <functional>
#include <iostream>
using namespace std;

int main() {
    less<int> smaller;
    greater<int> larger;

    cout << smaller(2, 5) << '\n';
    cout << larger(5, 2) << '\n';
}
