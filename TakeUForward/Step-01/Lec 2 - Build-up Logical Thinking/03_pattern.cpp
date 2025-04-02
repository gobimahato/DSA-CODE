#include <bits/stdc++.h>
using namespace std;

void print(int n) {
  int i, j;

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      cout << j << " ";
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
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
