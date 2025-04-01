#include <iostream>
using namespace std;

int main() {
  char vowel;
  cout << "Enter one character ";
  cin >> vowel;

  if (vowel == 'a')
    cout << vowel << " is a vowel" << endl;
  else if (vowel == 'e')
    cout << vowel << " is a vowel" << endl;
  else if (vowel == 'i')
    cout << vowel << " is a vowel" << endl;
  else if (vowel == 'o')
    cout << vowel << " is a vowel" << endl;
  else if (vowel == 'u')
    cout << vowel << " is a vowel" << endl;
  else
    cout << vowel << " is a consonant" << endl;

  return 0;
}
