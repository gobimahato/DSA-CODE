#include <bits/stdc++.h>
using namespace std;

void print(int n) {
  int i, j;

  for (i = 0; i < 2 * n - 1; i++) {
    for (j = 0; j < 2 * n - 1; j++) {
      int top = i;
      int left = j;
      int right = (2 * n - 2) - j;
      int down = (2 * n - 2) - i;

      cout << (n - min(min(top, down), min(left, right)));
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
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/
