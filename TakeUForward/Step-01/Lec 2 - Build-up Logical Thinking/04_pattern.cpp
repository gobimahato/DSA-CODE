#include <bits/stdc++.h>
using namespace std;

void print(int n) {
  int i, j;

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      cout << i << " ";
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
2 2
3 3 3
4 4 4 4
5 5 5 5 5 
*/
