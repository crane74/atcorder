#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  int cnt = 0, btn = 1;

  for (int i = 0; i < N; i++) {
    btn = a[btn - 1];
    cnt++;

    if (btn == 2) {
      cout << cnt << endl;
      break;
    }
    if (i == N - 1) {
      cout << -1 << endl;
    }
  }
}