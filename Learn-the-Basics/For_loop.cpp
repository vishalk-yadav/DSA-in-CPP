/*Given two integers low and high, return the sum of all integers from low to
 * high inclusive.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  // Your code goes here
  int sum = 0, high;
  cout << "Enter the high number: ";
  cin >> high;
  for (int low = 1; low <= high; low++) {
    sum += low;
  }
  cout << sum;
  return 0;
}