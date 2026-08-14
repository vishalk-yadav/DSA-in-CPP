#include <list>
#include <iostream>
using namespace std;

int main() {
    list<int> li = {1, 2, 4, 5};

    auto it = li.begin();
    advance(it, 2);
    li.insert(it, 3);

    li.push_front(0);
    li.push_back(6);

    li.remove(3);
    li.sort();
    li.reverse();

    for (int x : li) cout << x << ' ';
    cout << '\n';
}
