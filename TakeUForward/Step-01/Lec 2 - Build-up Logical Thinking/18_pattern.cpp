#include <bits/stdc++.h>
using namespace std;

void print(int n) {
  int i;
  char ch;

  for (i = 0; i < n; i++) {
    char ch = 'A' - (n - 1);
    for (ch = 'E' - i; ch <= 'E'; ch++) {
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
E
D E
C D E
B C D E
A B C D E
*/
