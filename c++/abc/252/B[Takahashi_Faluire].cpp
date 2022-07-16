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
  int N, K;
  cin >> N >> K;

  vector<pair<ll, ll>> A;
  rep(i, N) {
    ll num;
    cin >> num;
    A.push_back({num, i + 1});
  }

  sort(rall(A));

  int max = A[0].first;

  bool ans = false;

  vector<int> B{K};
  rep(i, K) cin >> B[i];

  rep(i, K) {
    rep(j, N) {
      if (B[i] == A[j].second && max == A[j].first) ans = true;
    }
  }

  YesNo(ans);
}