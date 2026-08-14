#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;

int main() {
    unordered_map<string, int> freq;

    freq["apple"]++;
    freq["apple"]++;
    freq["banana"]++;

    for (const auto& [word, count] : freq)
        cout << word << " -> " << count << '\n';
}
