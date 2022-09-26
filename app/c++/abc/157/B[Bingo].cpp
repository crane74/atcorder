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
  vector<vector<int>> A(3, vector<int>(3));
  rep(i, 3) rep(j, 3) cin >> A[i][j];

  int N;
  cin >> N;

  vector<int> b(N);
  rep(i, N) cin >> b[i];

  vector<vector<bool>> checked(3, vector<bool>(3, false));
  bool ans = false;

  rep(i, 3) {
    rep(j, 3) {
      rep(k, N) {
        if (A[i][j] == b[k]) {
          checked[i][j] = true;
        }
      }
    }
  }

  //縦
  rep(i, 3) {
    int cnt = 0;
    rep(j, 3) {
      if (checked[i][j]) cnt++;
    }
    if (cnt == 3) ans = true;
  }

  //横
  rep(i, 3) {
    int cnt = 0;
    rep(j, 3) {
      if (checked[j][i]) cnt++;
    }
    if (cnt == 3) ans = true;
  }

  //斜め
  if (checked[0][0] && checked[1][1] && checked[2][2]) ans = true;
  if (checked[2][0] && checked[1][1] && checked[0][2]) ans = true;

  YesNo(ans);
}