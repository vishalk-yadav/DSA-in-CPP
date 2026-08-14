#include <map>
#include <iostream>
#include <string>
using namespace std;

int main() {
    map<string, int> marks;

    marks["Vishal"] = 95;
    marks["Aman"] = 88;
    marks["Riya"] = 91;

    marks["Vishal"] = 99;

    cout << "Vishal: " << marks["Vishal"] << '\n';

    auto it = marks.find("Aman");
    if (it != marks.end())
        cout << it->first << " -> " << it->second << '\n';

    for (const auto& [name, score] : marks)
        cout << name << " -> " << score << '\n';
}
