#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter the number ";
  cin >> num;

  for (int i = 2; i <= num; i++) {
    if (i % 2 == 0) {
      cout << i << " is even number" << endl;
    }
  }

  return 0;
}
