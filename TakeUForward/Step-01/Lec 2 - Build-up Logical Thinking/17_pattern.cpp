#include <bits/stdc++.h>
using namespace std;

void print(int n) {
  int i, j;

  for (i = 0; i < n; i++) {
    // space
    for (j = 0; j < n - i - 1; j++) {
      cout << " ";
    }

    // Aplha
    char ch = 'A';
    int breakpoint = (2 * i + 1) / 2;
    for (j = 1; j <= 2 * i + 1; j++) {
      cout << ch;
      if (j <= breakpoint)
        ch++;
      else
        ch--;
    }

    // space
    for (j = 0; j < n - i - 1; j++) {
      cout << " ";
    }

    cout << endl;
  }

  cout << endl;
}

int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n;
    cin >> n;
    print(n);
  }
}

/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
