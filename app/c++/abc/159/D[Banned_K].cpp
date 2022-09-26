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

int main() {
  int n;
  cin >> n;

  vector<ll> a(n), c(n + 1);
  for (auto &i : a) cin >> i, ++c[i];

  ll ans = 0;
  for (int i = 1; i <= n; ++i) ans += c[i] * (c[i] - 1) / 2;

  for (int i = 0; i < n; ++i)
    cout << ans - c[a[i]] * (c[a[i]] - 1) / 2 +
                (c[a[i]] - 1) * (c[a[i]] - 2) / 2
         << endl;
}