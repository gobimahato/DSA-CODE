#include <iostream>
using namespace std;

int main() {
  cout << "3*2" << endl; // print as 3*2 (because it's string)
  cout << 3 * 2 << endl; // print as number (because both are numbers)

  int num1 = 10, num2 = 20, num3 = 30;
  cout << num1 + num2 + num3 << endl;

  char a = 'a'; // print a as a character 1 byte or 8 bit
  char h = '&'; // print & as a character
  char v = '8'; // print 8 as a character not as a number

  cout << a << h << v << endl;

  int i = 24;                // 4 byte or 32 bit;
  float f = 3.1214;          // 4 byte or 32 bit
  double d = 3.121414141425; // 8 byte or 64 bit

  cout << i << endl;
  cout << f << endl;
  cout << d << endl;

  bool b = false; // 0 -> false, 1 -> true

  cout << b << endl;

  return 0;
}
