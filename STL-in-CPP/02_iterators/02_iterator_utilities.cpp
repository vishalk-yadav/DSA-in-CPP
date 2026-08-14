#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    auto it = v.begin();

    advance(it, 3);
    cout << "*it = " << *it << '\n';
    cout << "distance = " << distance(v.begin(), v.end()) << '\n';

    cout << "next = " << *next(v.begin(), 2) << '\n';
    cout << "prev = " << *prev(v.end(), 2) << '\n';
}
