#include <cmath>
#include <iostream>
#include <utility>
using namespace std;
int *bubbleSort(int arr[], int len) {
  for (int i = 0; i < len - 1; i++) {
    if (arr[i] > arr[i + 1])
      swap(arr[i], arr[i + 1]);
  }
  return arr;
}
int binarySearch(int key, int low, int high, int arr[]) {
  if (low == high) {
    if (arr[low] == key)
      return low;
    else
      return -1;
  }
  int mid = floor((low + high) / 2);
  if (arr[mid] == key)
    return mid;
  else if (key < arr[mid])
    return binarySearch(key, low, mid - 1, arr);
  else
    return binarySearch(key, mid + 1, high, arr);
}
int main() {
  int key, len;
  cout << "Enter array length: ";
  cin >> len;
  int array[len];
  cout << "Enter " << len << " numbers: ";
  for (int i = 0; i < len; i++) {
    cin >> array[i];
  }
  cout << "So the numbers are: ";
  for (int i = 0; i < len; i++)
    cout << array[i] << " ";
  cout << endl;
  bubbleSort(array, len);
  cout << "After sorting the array is: ";
  for (int i = 0; i < len; i++)
    cout << array[i] << " ";
  cout << endl;
  cout << "Enter the key you want to search: ";
  cin >> key;
  int result = binarySearch(key, 0, len - 1, array);
  if (result != -1)
    cout << "So, the value " << key << " is in " << result + 1 << " position."
         << endl;
  else
    cout << "The value " << key << " was not found." << endl;
}
