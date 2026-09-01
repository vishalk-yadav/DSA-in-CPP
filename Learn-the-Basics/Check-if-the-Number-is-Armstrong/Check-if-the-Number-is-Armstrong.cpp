#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {

  int temp = n;
  int count = 0;
  int sum = 0;

  while (temp != 0) {
    count++;
    temp /= 10;
  }

  temp = n;

  while (temp != 0) {

    int digit = temp % 10;
    int power = 1;

    for (int i = 0; i < count; i++) {
      power *= digit;
    }

    sum += power;
    temp /= 10;
  }

  return sum == n;
}

int main() {

  int t;
  cin >> t;

  while (t--) {

    int n;
    cin >> n;

    bool result = isArmstrong(n);

    cout << "Number: " << n << endl;
    cout << "Answer: " << result << endl;
  }

  return 0;
}