/* Q. Given an integer n. You need to recreate the pattern given below for any
value of N. Let's say for N = 5, the pattern should look like as below:

1 2 3 4 5
  1 2 3 4
    1 2 3
      1 2
        1
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5                                        */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int k = 1; k <= (i - 1); k++) {
      cout << "  ";
    }
    for (int j = n; j >= i; j--) {
      cout << n - j + 1 << " ";
    }
    cout << endl;
  }
  for (int i = 1; i <= n; i++) {
    for (int k = 1; k <= (n - i); k++) {
      cout << "  ";
    }
    for (int j = i; j >= 1; j--) {
      cout << i - j + 1 << " ";
    }
    cout << endl;
  }

  return 0;
}