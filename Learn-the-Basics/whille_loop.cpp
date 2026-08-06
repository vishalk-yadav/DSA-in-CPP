/* Given a digit d (0 to 9), find the sum of the first 50 positive integers
(integers > 0) that end with digit d. A number ends with digit d if its last
digit is d. */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int d, integers;
  cin >> d;
  // validate input
  if (d < 0 || d > 9) {
    cout << "Invalid digit. Please enter a digit between 0 to 9." << endl;
    return 1;
  }
  int sum = 0, count = 0;
  int num = 1; // Start checking from the first positive integer.
  // Loop until we find 50 matching numbers
  while (count < 50) {
    // Check if the last digit of 'num' is 'd'
    if (num % 10 == d) {
      sum += num;
      count++;
    }
    num++;
  }
  cout << sum << endl;
  return 0;
}