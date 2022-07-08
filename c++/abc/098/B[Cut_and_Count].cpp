#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)

using namespace std;
using ll = long long;

//解答プロセス
//左右に分けて、そのそれぞれに対してaからzまで両方にあるか確認する。両方にあるならcnt++。

int main() {
  int N;
  cin >> N;

  string s;
  cin >> s;

  int ans = 0;
  reps(i, N) {
    int cnt = 0;

    for (char c = 'a'; c <= 'z'; c++) {
      bool left = false, right = false;

      for (int j = 0; j < i; j++) {
        if (s[j] == c) {
          left = true;
        }
      }

      for (int j = i; j < N; j++) {
        if (s[j] == c) {
          right = true;
        }
      }

      if (left & right) {
        cnt++;
      }
    }

    if (cnt > ans) {
      ans = cnt;
    }
  }

  cout << ans << endl;
}