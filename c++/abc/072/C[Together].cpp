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

  int min = *min_element(begin(a), end(a));
  int max = *max_element(begin(a), end(a));

  int ans = 0, cnt = 0;

  for (int X = min - 1; X <= max + 1; X++) {
    cnt = 0;
    for (int i = 0; i < N; i++) {
      if (abs(X - a[i]) <= 1) {
        cnt++;
      }

      if (cnt > ans) {
        ans = cnt;
      }
    }
  }
  cout << ans << endl;
}