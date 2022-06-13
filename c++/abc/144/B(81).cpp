#include <bits/stdc++.h>
using namespace std;

string solve(int n) {
  int flag = 0;

  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      if (i * j == n) {
        return "Yes";
      }
    }
  }

  return "No";
}

int main() {
  int N;
  cin >> N;

  cout << solve(N) << endl;
}