/* Q. Given an integer n. You need to recreate the pattern given below for any
value of N. Let's say for N = 5, the pattern should look like as below:

A B C D E
A B C D
A B C
A B
A                      */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << (char)(64 + j) << " ";
    }
    cout << endl;
  }

  return 0;
}