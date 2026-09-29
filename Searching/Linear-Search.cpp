#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == key) {
      return i;
      break;
    }
  }
  return -1;
}

int main() {
  int arr[] = {10, 20, 30, 40, 50, 60};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 60;

  int result = linearSearch(arr, n, key);

  if (result != -1) {
    cout << "Element found at index " << result;
  } else {
    cout << "Element not found";
  }
  return 0;
}