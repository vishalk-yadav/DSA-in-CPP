#include <memory>
#include <iostream>
using namespace std;

int main() {
    auto p1 = make_shared<int>(100);
    shared_ptr<int> p2 = p1;

    cout << "use_count = " << p1.use_count() << '\n';

    weak_ptr<int> wp = p1;

    if (auto locked = wp.lock())
        cout << *locked << '\n';

    p2.reset();
    p1.reset();
}
