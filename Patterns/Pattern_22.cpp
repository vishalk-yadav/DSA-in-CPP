/* Q. Given an integer n. You need to recreate the pattern given below for any
value of N. Let's say for N = 5, the pattern should look like as below:

5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5                          */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int size = 2 * n - 1;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {

      int top = i;
      int left = j;
      int right = size - 1 - j;
      int bottom = size - 1 - i;

      int layer = min(min(top, bottom), min(left, right));

      cout << n - layer << " ";
    }
    cout << endl;
  }

  return 0;
}