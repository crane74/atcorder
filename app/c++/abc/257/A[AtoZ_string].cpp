#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N, X;
  cin >> N >> X;

  string s = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

  string x;

  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < N; j++) {
      x += s[i];
    }
  }

  cout << x[X - 1] << endl;
}