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
  int H, W;
  cin >> H >> W;

  vector<vector<char>> G(H, vector<char>(W));
  rep(i, H) rep(j, W) cin >> G[i][j];

  int x = 0, y = 0, i = 0, j = 0;

  while (1) {
    if (G[i][j] == 'U') {
      if (x == 0) {
        cout << x + 1 << " " << y + 1 << endl;
        return 0;
      } else {
        x--;
      }
    }

    if (G[i][j] == 'D') {
      if (x == H - 1) {
        cout << x + 1 << " " << y + 1 << endl;
        return 0;
      } else {
        x++;
      }
    }

    if (G[i][j] == 'L') {
      if (y == 0) {
        cout << x + 1 << " " << y + 1 << endl;
        return 0;
      } else {
        y--;
      }
    }

    if (G[i][j] == 'R') {
      if (y == W - 1) {
        cout << x + 1 << " " << y + 1 << endl;
        return 0;
      } else {
        y++;
      }
    }

    i = x;
    j = y;

    if (x == 0 && y == 0) {
      cout << -1 << endl;
      return 0;
    }
  }
}
