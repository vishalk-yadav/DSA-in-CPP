#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<pair<string, int>> students = {
        {"Aman", 90},
        {"Riya", 95},
        {"Vishal", 92}
    };

    sort(students.begin(), students.end(),
         [](const auto& a, const auto& b) {
             if (a.second != b.second)
                 return a.second > b.second;
             return a.first < b.first;
         });

    for (const auto& [name, marks] : students)
        cout << name << " " << marks << '\n';
}
