#include <bits/stdc++.h>
using namespace std;

void print(int n) {
  int i, j;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
        cout << "*";
      } else {
        cout << " ";
      }
    }

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
****
*  *
*  *
****
*/
