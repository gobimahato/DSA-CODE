#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Enter your first number: ";
  cin >> a;
  cout << "Enter your second number: ";
  cin >> b;

  if (a > b) {
    cout << "Yes!";
  } else {
    cout << "NO";
  };

  return 0;
}
