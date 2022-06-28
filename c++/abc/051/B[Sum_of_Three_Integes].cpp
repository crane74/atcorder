#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)

using namespace std;
using ll = long long;

int main() {
  int K, S;
  cin >> K >> S;

  int z, cnt = 0;

  rep(x, K + 1) {
    rep(y, K + 1) {
      z = S - (x + y);

      if (z >= 0 && z <= K) {
        cnt++;
      }
    }
  }

  cout << cnt << endl;
}