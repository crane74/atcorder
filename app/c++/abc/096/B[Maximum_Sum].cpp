#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)

using namespace std;
using ll = long long;

//解答プロセス
// A,B,Cの中で一番大きい値を2^k倍すればよい

int action(int &a, int &b, int &c) {
  int Max = max(a, max(b, c));

  if (Max == a) {
    a *= 2;
    return a;
  } else if (Max == b) {
    b *= 2;
    return b;
  } else if (Max == c) {
    c *= 2;
    return c;
  }
}

int main() {
  int A, B, C, K;
  cin >> A >> B >> C >> K;

  for (int i = 0; i < K; i++) {
    action(A, B, C);
  }

  cout << A + B + C << endl;
}