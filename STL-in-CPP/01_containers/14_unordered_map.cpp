#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<string, int> freq;

  freq["apple"]++;
  freq["apple"]++;
  freq["banana"]++;

  for (const auto &entry : freq) {
    cout << entry.first << " -> " << entry.second << '\n';
  }

  return 0;
}