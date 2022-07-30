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

//解答プロセス
// bit全探索

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> p(m);
  vector<vector<int>> S(m, vector<int>());

  rep(i, m) {
    int k;
    cin >> k;

    rep(j, k) {
      int s;
      cin >> s;
      s--;
      S[i].emplace_back(s);
    }
  }

  rep(i, m) cin >> p[i];

  int ans = 0;

  rep(msk, 1 << n) {
    int ok = 0;
    rep(i, m) {
      int cnt = 0;
      fore(j, S[i]) if (msk & 1 << j) cnt++;

      if (cnt % 2 == p[i]) ok++;
    }
    if (ok == m) ans++;
  }

  cout << ans << endl;
}