/* Q. Given an integer n. You need to recreate the pattern given below for any
value of N. Let's say for N = 5, the pattern should look like as below:

* * * * *
*       *
*       *
*       *
* * * * *           */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      // Print '*' along the 4 outer edges
      if (i == 1 || i == n || j == 1 || j == n) {
        cout << "* ";
      } else {
        // Print two spaces for the hollow center
        cout << "  ";
      }
    }
    cout << "\n";
  }

  return 0;
}