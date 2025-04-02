#include <bits/stdc++.h>
using namespace std;

void print(int n) {
  int i, j;

  for (i = 0; i < n; i++) {
    for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
      cout << ch << " ";
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
A B C D E
A B C D
A B C
A B
A
*/
