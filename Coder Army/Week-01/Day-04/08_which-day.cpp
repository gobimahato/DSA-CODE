#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter the number (1-7) only : ";
  cin >> num;

  if (num == 1)
    cout << "Monday" << endl;
  else if (num == 2)
    cout << "Tuesday" << endl;
  else if (num == 3)
    cout << "Wednesday" << endl;
  else if (num == 4)
    cout << "Thursday" << endl;
  else if (num == 5)
    cout << "Friday" << endl;
  else if (num == 6)
    cout << "Saturday" << endl;
  else if (num == 7)
    cout << "Sunday" << endl;
  else
    cout << "Please enter valid day (1-7) only " << endl;

  return 0;
}
