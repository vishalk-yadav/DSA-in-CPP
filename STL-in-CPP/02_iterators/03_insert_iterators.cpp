#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    vector<int> source = {1, 2, 3};
    vector<int> dest;

    copy(source.begin(), source.end(), back_inserter(dest));

    for (int x : dest) cout << x << ' ';
    cout << '\n';
}
