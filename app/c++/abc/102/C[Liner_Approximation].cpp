#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)

using namespace std;
using ll = long long;

// 解答プロセス
// マンハッタン距離の差の総和を最小化するときは中央値を使う

int main() {
  ll N;
  cin >> N;

  vector<ll> A(N);
  rep(i, N) {
    cin >> A[i];
    A[i] -= (i + 1);
  }

  sort(A.begin(), A.end());

  ll b = 0;
  if (N % 2 == 1) {
    b = A[N / 2];
  } else {
    b = (A[N / 2 - 1] + A[N / 2]) / 2;
  }

  ll ans = 0;
  rep(i, N) { ans += abs(A[i] - b); }

  cout << ans << endl;
}