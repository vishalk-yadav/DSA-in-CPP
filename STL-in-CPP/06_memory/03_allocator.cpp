#include <memory>
#include <iostream>
using namespace std;

int main() {
    allocator<int> alloc;

    int* p = alloc.allocate(3);

    for (int i = 0; i < 3; ++i)
        alloc.construct(p + i, (i + 1) * 10);

    for (int i = 0; i < 3; ++i)
        cout << p[i] << ' ';
    cout << '\n';

    for (int i = 0; i < 3; ++i)
        alloc.destroy(p + i);

    alloc.deallocate(p, 3);
}
