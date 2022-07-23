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
  int N;
  cin >> N;

  vector<vector<char>> A(N, vector<char>(N));
  rep(i, N) {
    rep(j, N) { cin >> A[i][j]; }
  }

  bool ans = true;

  rep(i, N) {
    rep(j, N) {
      if (i == j) continue;

      if (A[i][j] == 'W') {
        if (A[j][i] != 'L') {
          ans = false;
        }
      } else if (A[i][j] == 'L') {
        if (A[j][i] != 'W') {
          ans = false;
        }
      } else if (A[j][i] != 'D') {
        ans = false;
      }
    }
  }

  if (ans) {
    cout << "correct" << endl;
  } else {
    cout << "incorrect" << endl;
  }
}