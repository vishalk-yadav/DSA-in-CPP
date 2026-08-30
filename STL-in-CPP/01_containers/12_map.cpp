#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
  map<string, int> marks;

  marks["Vishal"] = 95;
  marks["Aman"] = 88;
  marks["Riya"] = 91;

  // Update Vishal's marks
  marks["Vishal"] = 99;

  cout << "Vishal: " << marks["Vishal"] << '\n';

  // Find Aman
  auto it = marks.find("Aman");

  if (it != marks.end()) {
    cout << it->first << " -> " << it->second << '\n';
  }

  // Print all elements
  for (const auto &entry : marks) {
    cout << entry.first << " -> " << entry.second << '\n';
  }

  return 0;
}