#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)

using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> A(N, vector<int>(N));
  rep(i, N) {
    rep(j, N) { cin >> A[i][j]; }
  }

  int ans = 0, max = 0;

  rep(i, N) {
    rep(j, N) { int a = A[i][j]; }
  }
}