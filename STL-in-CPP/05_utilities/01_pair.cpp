#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
  pair<string, int> p = {"Vishal", 95};

  cout << p.first << " " << p.second << '\n';

  pair<int, pair<int, int>> nested = {1, {2, 3}};
  cout << nested.first << ' ' << nested.second.first << ' '
       << nested.second.second << '\n';
}
