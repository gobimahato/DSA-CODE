#include <iostream>
using namespace std;

int main() {
  int marks;
  cout << "Enter your marks: ";
  cin >> marks;

  if (marks < 33) {
    cout << "You're failed." << endl;
  } else {
    cout << "You're passed." << endl;
  }

  return 0;
}
