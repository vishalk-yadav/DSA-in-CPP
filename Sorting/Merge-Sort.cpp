#include <bits/stdc++.h>
using namespace std;

void Merge(int arr[], int low, int mid, int high) {
  int n1 = mid - low + 1;
  int n2 = high - mid;
  int *left = new int[n1];
  int *right = new int[n2];
  for (int i = 0; i < n1; i++) {
    left[i] = arr[low + i];
  }
  for (int i = 0; i < n2; i++) {
    right[i] = arr[mid + 1 + i];
  }
  int i = 0;
  int j = 0;
  int k = low;
  while (i < n1 && j < n2) {
    if (left[i] <= right[j]) {
      arr[k] = left[i];
      i++;
    } else {
      arr[k] = right[j];
      j++;
    }
    k++;
  }
  while (i < n1) {
    arr[k] = left[i];
    i++;
    k++;
  }
  while (j < n2) {
    arr[k] = right[j];
    j++;
    k++;
  }
  delete[] left;
  delete[] right;
}

void MergeSort(int arr[], int low, int high) {
  if (low >= high)
    return;
  int mid = low + (high - low) / 2;
  MergeSort(arr, low, mid);
  MergeSort(arr, mid + 1, high);
  Merge(arr, low, mid, high);
}

int main() {
  int arr[] = {4, 6, 2, 5, 7, 9, 1, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Original Array : ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  int low = 0;
  int high = n - 1;

  MergeSort(arr, low, high);

  cout << "Sorted Array : ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}