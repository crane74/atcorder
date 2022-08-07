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
#define fore(i, a) for (auto &i : a)
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

double exp(int num) {
  double sum = 0;
  rep(i, num + 1) sum += i;

  return sum / num;
}

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> p(N);
  rep(i, N) cin >> p[i];

  double ans = 0, mx = 0;
  rep(i, N - (K - 1)) {
    mx = 0;
    rep(j, K) { mx += exp(p[i + j]); }
    if (ans < mx) ans = mx;
  }

  cout << ans << endl;
}