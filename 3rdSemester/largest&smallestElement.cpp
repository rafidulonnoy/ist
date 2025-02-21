#include <iostream>
using namespace std;

int main() {
  int n, max, min;
  cout << "Enter the size of the array: ";
  cin >> n;
  int arr[n];
  cout << "Enter the elements of the array: ";
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  max = arr[0];
  min = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i])
      max = arr[i];
    if (min > arr[i])
      min = arr[i];
  }
  cout << "The largest element is " << max << " & The smallest element is "
       << min << endl;
}
