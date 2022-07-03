#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)

using namespace std;
using ll = long long;

int main() {
  int R, C;
  cin >> R >> C;

  vector<vector<int>> A(2, vector<int>(2));
  rep(i, 2) {
    rep(j, 2) { cin >> A[i][j]; }
  }

  cout << A[R - 1][C - 1] << endl;
}