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
  int N, M;
  cin >> N >> M;

  vector<int> k(M);
  vector<vector<int>> x(M);
  rep(i, M) {
    cin >> k[i];
    rep(j, k[i]) {
      int X;
      cin >> X;
      x[i].emplace_back(X);
    }
  }

  vector<vector<bool>> check(N, vector<bool>(N, 0));
  rep(i, M) {
    rep(a, k[i]) rep(b, k[i]) check[x[i][a] - 1][x[i][b] - 1] = true;
  }

  bool judge = true;

  rep(i, N) {
    rep(j, N) {
      if (!check[i][j]) judge = false;
    }
  }

  YesNo(judge);
}