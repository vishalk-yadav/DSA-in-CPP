/* Q. Given an integer n. You need to recreate the pattern given below for any
value of N. Let's say for N = 5, the pattern should look like as below:

*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *             */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    for (int k = 1; k <= 2 * (n - i); k++) {
      cout << "  ";
    }
    for (int j = i; j >= 1; j--) {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = 1; i < n; i++) {
    for (int j = n - 1; j >= i; j--) {
      cout << "* ";
    }
    for (int k = 1; k <= 2 * i; k++) {
      cout << "  ";
    }
    for (int j = n - 1; j >= i; j--) {
      cout << "* ";
    }
    cout << endl;
  }

  return 0;
}