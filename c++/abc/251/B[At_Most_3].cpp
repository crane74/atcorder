#include <bits/stdc++.h>

// REP macro
#define reps(i, a, n) for (ll i = (a); i < (ll)(n); ++i)
#define rep(i, n) reps(i, 0, n)
#define rrep(i, n) reps(i, 1, n + 1)
#define repd(i, n) for (ll i = n - 1; i >= 0; i--)
#define rrepd(i, n) for (ll i = n; i >= 1; i--)

// define short
#define pb push_back
#define mp make_pair
#define all(obj) (obj).begin(), (obj).end()
#define rall(obj) (obj).rbegin(), (obj).rend()
#define YesNo(bool)        \
  if (bool) {              \
    cout << "Yes" << endl; \
  } else {                 \
    cout << "No" << endl;  \
  }

// alias
using ull = unsigned long long;
using ll = long long;

using namespace std;

int main() {
  ll N, W;
  cin >> N >> W;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  vector<int> flag(W + 1);

  rep(i, N) {
    if (A[i] <= W) flag[A[i]] = 1;

    reps(j, i + 1, N) {
      if (A[i] + A[j] <= W) flag[A[i] + A[j]] = 1;

      reps(k, j + 1, N) {
        if (A[i] + A[j] + A[k] <= W) flag[A[i] + A[j] + A[k]] = 1;
      }
    }
  }
  int ans = 0;
  rrep(i, W) { ans += flag[i]; }

  cout << ans << endl;
}