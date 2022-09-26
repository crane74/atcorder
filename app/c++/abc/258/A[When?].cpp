#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)

using namespace std;
using ll = long long;

int main() {
  int K;
  cin >> K;

  int h, t;
  if (K >= 60) {
    h = 1;
    t = K - 60;
  } else {
    h = 0;
    t = K;
  }
  if (t < 10) {
    cout << 21 + h << ":0" << t << endl;
  } else {
    cout << 21 + h << ":" << t << endl;
  }
}