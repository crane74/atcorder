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
// xをbit列に直して、項が1の場合の和を考える。

int main() {
  ll n, x;
  cin >> n >> x;

  bitset<20> X(x);

  vector<ll> A(n);
  rep(i, n) cin >> A[i];

  ll sum = 0;

  rep(i, n) {
    if (X.test(i)) {
      sum += A[i];
    }
  }

  cout << sum << endl;
}