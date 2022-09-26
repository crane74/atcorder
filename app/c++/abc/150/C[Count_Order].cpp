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

// alias
using ull = unsigned long long;
using ll = long long;

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> P(N), Q(N), v;
  rep(i, N) cin >> P[i];
  rep(i, N) cin >> Q[i];
  rep(i, N) v.emplace_back(i + 1);

  int idx = 0, a = -1, b = -1;

  do {
    bool ok = true;
    rep(i, N) if (v[i] != P[i]) ok = false;
    if (ok) a = idx;

    ok = true;
    rep(i, N) if (v[i] != Q[i]) ok = false;
    if (ok) b = idx;

    idx++;
  } while (next_permutation(all(v)));

  int ans = abs(a - b);

  cout << ans << endl;
}
