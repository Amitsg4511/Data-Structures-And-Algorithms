#include <bits/stdc++.h>
using namespace std;
// Lower Bound -
// Given an array of integer arranged in asc order and a value x.
// Find the index of the first element
// Which is GREATER THAN OR EQUAL TO x.
// Time complexity - o(logn) and space complexity - O(1)
int lowerBound(int arr[], int arrSize, int x) {
  int low = 0;
  int high = arrSize - 1;
  // LowerBound
  int answer = arrSize;
  while (low <= high) {
    // mid = (high+low)/2 --> (high+low+low-low)/2
    // --> (low+low)/2+(high-low)/2 --> 2low/2 + (high-low)/2
    int mid = low + (high - low) / 2;

    if (arr[mid] >= x) {
      answer = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return answer;
}

// Upper Bound -
// Given an array of integer arranged in asc order and a value x.
// Find the index of the first element
// Which is GREATER THAN THAN x.

int upperBound(int arr[], int arrSize, int x) {
  int low = 0;
  int high = arrSize - 1;
  int answer = arrSize;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (arr[mid] > x) {
      answer = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return answer;
}

int main() {
  int arr[] = {1, 3, 3, 5, 7, 7, 8, 8, 9, 12, 14};
  int arrSize = 11;
  int x = 15;
  // int ans = lowerBound(arr, arrSize, x);
  int ans = upperBound(arr, arrSize, x);
  cout << "Answer iS: " << ans << endl;
}
