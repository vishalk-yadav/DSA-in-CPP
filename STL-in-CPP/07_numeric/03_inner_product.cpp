#include <numeric>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};

    int dot = inner_product(a.begin(), a.end(), b.begin(), 0);

    cout << "dot product = " << dot << '\n';
}
