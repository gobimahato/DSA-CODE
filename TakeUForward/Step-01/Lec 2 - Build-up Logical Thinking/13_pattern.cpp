#include <bits/stdc++.h>
using namespace std;

void print(int n) {
  int i, j;

  int num = 1;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      cout << num << " ";
      num = num + 1;
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
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
