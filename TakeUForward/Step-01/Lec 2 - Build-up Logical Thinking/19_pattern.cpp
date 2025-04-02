#include <bits/stdc++.h>
using namespace std;

void print(int n) {
  int i, j;

  int initalSpace = 0;
  for (i = 0; i < n; i++) {
    // stars
    for (j = 1; j <= n - i; j++) {
      cout << "*";
    }
    // spaces
    for (j = 1; j <= initalSpace; j++) {
      cout << " ";
    }
    // stars
    for (j = 1; j <= n - i; j++) {
      cout << "*";
    }
    initalSpace = initalSpace + 2;
    cout << endl;
  }

  initalSpace = 2 * n - 2;
  for (i = 1; i <= n; i++) {
    // stars
    for (j = 1; j <=  i; j++) {
      cout << "*";
    }
    // spaces
    for (j = 1; j <= initalSpace; j++) {
      cout << " ";
    }
    // stars
    for (j = 1; j <= i; j++) {
      cout << "*";
    }

    initalSpace = initalSpace - 2;
    cout << endl;
  }
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
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
 */
