#include <iostream>
using namespace std;
int main() {
  int n = 3;
  int ch = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << ch << " ";
      ch++;
    }
    cout << endl;
  }
}
