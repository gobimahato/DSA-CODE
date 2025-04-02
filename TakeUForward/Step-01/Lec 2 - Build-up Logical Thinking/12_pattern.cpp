#include <bits/stdc++.h>
using namespace std;

void print(int n) {
  int i, j;

  int space = 2 * (n - 1);
  for (i = 1; i <= n; i++) {
    // numbers
    for (j = 1; j <= i; j++) {
      cout << j;
    }

    // space
    for (j = 1; j <= space; j++) {
      cout << " ";
    }

    // numbers
    for (j = i; j >= 1; j--) {
      cout << j;
    }

    cout << endl;
    space -= 2;
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
1      1
12    21
123  321
12344321
*/
