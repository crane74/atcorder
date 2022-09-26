#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)

using namespace std;
using ll = long long;

//解答プロセス
// bit全探索
// Sの長さがNの時、N-1個の場所に+を入れることが可能。2^(N-1)通りを試す

bool contain(int mask, int position) {
  if ((mask & (1 << position)) != 0)
    return true;
  else
    return false;
}

int main(void) {
  string s;
  cin >> s;
  int n = s.size() - 1;

  ll sum = 0;
  for (int mask = 0; mask < (1 << n); ++mask) {
    int l = 0;  //左端
    ll tmp = 0;
    int r;  //右端
    for (r = 0; r < n; ++r) {
      if (contain(mask, r)) {
        string t = s.substr(l, r - l + 1);
        ll num = stoll(t);
        tmp += num;
        l = r + 1;
      }
    }
    string t = s.substr(l, r - l + 1);
    ll num = stoll(t);
    tmp += num;
    sum += tmp;
  }
  cout << sum << endl;
}
