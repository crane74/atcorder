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

//解答プロセス
//再帰関数を用いる。
// b_n = r_(n-1) + b_(n-1) * Y
// r_n = r_(n-1) + b_n *X

int N, X, Y;

ll calc(int level, bool is_red) {
  if (level == 1) return is_red ? 0 : 1;
  if (is_red) {
    return calc(level - 1, true) + calc(level, false) * X;
  } else {
    return calc(level - 1, true) + calc(level - 1, false) * Y;
  }
}

int main() {
  cin >> N >> X >> Y;

  cout << calc(N, true) << endl;
}