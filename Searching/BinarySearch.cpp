#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key) {
  int low = 0;
  int high = n - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] == key) {
      return mid;
    } else if (key > arr[mid]) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return -1;
}

int main() {
  int arr[] = {10, 20, 30, 40, 50, 60};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 80;

  int result = linearSearch(arr, n, key);

  if (result != -1) {
    cout << "Found at index " << result;
  } else {
    cout << "Element not found";
  }
  return 0;
}