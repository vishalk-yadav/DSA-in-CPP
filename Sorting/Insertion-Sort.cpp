#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
      swap(arr[j - 1], arr[j]);
      j--;
    }
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

  insertionSort(arr, n);

  cout << "Sorted Array : ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}