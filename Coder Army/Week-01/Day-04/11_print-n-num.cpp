#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter the number ";
  cin >> num;

  for (int i = 1; i <= num; i++) {
    cout << "Number is " << i << endl;
  }

  return 0;
}
