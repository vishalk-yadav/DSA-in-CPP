#include <bits/stdc++.h>
using namespace std;

int GCD(int n1, int n2) {
  for (int i = min(n1, n2); i >= 1; i--) {
    if (n1 % i == 0 && n2 % i == 0) {
      return i;
    }
  }
  return 1;
}

int main() {

  int t;
  cin >> t;

  while (t--) {

    int n1, n2;
    cin >> n1 >> n2;

    cout << GCD(n1, n2) << endl;
  }

  return 0;
}