#include <tuple>
#include <iostream>
#include <string>
using namespace std;

int main() {
    tuple<int, string, double> t = {101, "Vishal", 9.1};

    cout << get<0>(t) << '\n';
    cout << get<1>(t) << '\n';
    cout << get<2>(t) << '\n';

    auto [id, name, cgpa] = t;
    cout << id << ' ' << name << ' ' << cgpa << '\n';
}
