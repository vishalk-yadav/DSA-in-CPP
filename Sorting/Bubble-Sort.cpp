#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    bool swaped = false;
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swaped = true;
      }
    }
    if (!swaped)
      break;
  }
}

int main() {
  int arr[] = {5, 3, 7, 2, 9, 6, 1, 8, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Original Array : ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  bubbleSort(arr, n);

  cout << "Sorted Array : ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}