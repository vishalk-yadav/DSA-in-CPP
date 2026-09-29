#include <bits/stdc++.h>
using namespace std;

struct Index {
  int key;
  int position;
};

int indexSequentialSearch(int arr[], int n, Index index[], int indexSize,
                          int key) {
  int start = 0;
  int end = n - 1;
  // Find the block
  for (int i = 0; i < indexSize; i++) {
    if (index[i].key <= key) {
      start = index[i].position;
    } else {
      end = index[i].position - 1;
      break;
    }
  }
  // Sequential search within block
  for (int i = start; i <= end; i++) {
    if (arr[i] == key) {
      return i;
      break;
    }
  }
  return -1;
}

int main() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int n = sizeof(arr) / sizeof(arr[0]);

  Index index[] = {{10, 0}, {40, 3}, {70, 6}, {100, 9}};
  int indexSize = 4;
  int key = 50;

  int result = indexSequentialSearch(arr, n, index, indexSize, key);

  if (result != -1) {
    cout << "Found at index " << result;
  } else {
    cout << "Not found";
  }
  return 0;
}