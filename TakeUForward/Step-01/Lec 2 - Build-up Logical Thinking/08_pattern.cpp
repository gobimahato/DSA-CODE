#include <bits/stdc++.h>
using namespace std;

void print(int n) {
  int i, j;

  for (i = 0; i < n; i++) {
    // space
    for (j = 0; j < i; j++) {
      cout << " ";
    }

    // star
    for (j = 0; j < (2 * n) - (2 * i + 1); j++) {
      cout << "*";
    }

    // space
    for (j = 0; j < i; j++) {
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
*********
 *******
  *****
   ***
    *
*/
