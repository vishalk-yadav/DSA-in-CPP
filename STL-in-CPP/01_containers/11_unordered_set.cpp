#include <unordered_set>
#include <iostream>
using namespace std;

int main() {
    unordered_set<int> us = {10, 20, 30, 40};

    us.insert(50);

    if (us.find(30) != us.end())
        cout << "30 exists\n";

    cout << "Bucket count: " << us.bucket_count() << '\n';

    for (int x : us) cout << x << ' ';
    cout << '\n';
}
