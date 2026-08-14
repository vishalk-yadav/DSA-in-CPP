/* Q. Given an integer n. You need to recreate the pattern given below for any
value of N. Let's say for N = 5, the pattern should look like as below:

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5   */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}