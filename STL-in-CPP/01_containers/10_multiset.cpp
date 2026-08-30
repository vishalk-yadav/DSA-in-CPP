#include <iostream>
#include <set>
using namespace std;

int main() {
  multiset<int> ms = {1, 2, 2, 2, 3, 4};

  cout << "Count of 2: " << ms.count(2) << '\n';

  auto range = ms.equal_range(2);

  for (auto it = range.first; it != range.second; ++it)
    cout << *it << ' ';

  cout << '\n';

  return 0;
}
