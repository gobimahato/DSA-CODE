#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter your number: ";
  cin >> num;

  if (num > 0) {
    cout << "Number is Positive " << num << endl;
  } else if (num < 0) {
    cout << "Number is Negative " << num << endl;
  } else {
    cout << "Number is Zero or " << num << endl;
  }

  return 0;
}
