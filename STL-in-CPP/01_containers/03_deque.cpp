#include <deque>
#include <iostream>
using namespace std;

int main() {
    deque<int> dq = {20, 30, 40};

    dq.push_front(10);
    dq.push_back(50);

    dq.pop_front();
    dq.pop_back();

    for (int x : dq) cout << x << ' ';
    cout << '\n';
}
