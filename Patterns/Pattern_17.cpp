/* Q. Given an integer n. You need to recreate the pattern given below for any
value of N. Let's say for N = 5, the pattern should look like as below:

        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A             */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int s = 1; s <= n - i; s++) {
      cout << "  ";
    }
    for (int j = 1; j <= i; j++) {
      cout << char(64 + j) << " ";
    }
    for (int k = i - 1; k >= 1; k--) {
      cout << char(64 + k) << " ";
    }
    cout << endl;
  }

  return 0;
}