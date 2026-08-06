/*Given an array arr of n elements. The task is to reverse the given array.
The reversal of array should be inplace.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "Original array is: 10 20 30 40 50" << endl;
  int arr[] = {10, 20, 30, 40, 50};
  int n = sizeof(arr) / sizeof(arr[0]);
  int start = 0;
  int end = n - 1;
  while (start < end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  cout << "Reverse array is: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}