#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {3, 4, 5, 6};

    vector<int> out;

    set_union(a.begin(), a.end(), b.begin(), b.end(), back_inserter(out));

    cout << "Union: ";
    for (int x : out) cout << x << ' ';
    cout << '\n';

    out.clear();
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(out));

    cout << "Intersection: ";
    for (int x : out) cout << x << ' ';
    cout << '\n';

    out.clear();
    set_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(out));

    cout << "Difference A-B: ";
    for (int x : out) cout << x << ' ';
    cout << '\n';
}
