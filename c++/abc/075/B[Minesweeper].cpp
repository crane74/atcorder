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
//単純にマス目周囲８マスの中に#が何個あるかを数えるだけ
//ここではdt={-1,0,1} dy={-1,0,-1}を用いて、マス目の周囲を探索している

int main() {
  int H, W;
  cin >> H >> W;

  string S[101];
  rep(y, H) cin >> S[y];

  rep(y, H) {
    rep(x, W) {
      if (S[y][x] == '.') {
        int c = 0;
        reps(dx, -1, 2) reps(dy, -1, 2) {
          if (dx == 0 and dy == 0) continue;
          int xx = x + dx;
          int yy = y + dy;
          if (0 <= xx and xx < W and 0 <= yy and yy < H) {
            if (S[yy][xx] == '#') c++;
          }
        }
        S[y][x] = char('0' + c);
      }
    }
  }
  rep(y, H) cout << S[y] << endl;
}
