#include <forward_list>
#include <iostream>
using namespace std;

int main() {
    forward_list<int> fl = {2, 3, 4};

    fl.push_front(1);
    fl.insert_after(fl.before_begin(), 0);
    fl.remove(3);
    fl.sort();

    for (int x : fl) cout << x << ' ';
    cout << '\n';
}
