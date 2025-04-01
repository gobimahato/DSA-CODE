#include <iostream>
using namespace std;

int main() {
  int package;
  cin >> package;

  if (package > 15) {
    cout << "Accepted" << endl;
  } else {
    cout << "Rejected" << endl;
  }

  return 0;
}
