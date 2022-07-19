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
  ll N;
  cin >> N;

  vector<string> S;
  rep(i, N) cin >> S[i];

  ll mn = 0, ans = 0, time = 0;
  map<int, int> check;

  rep(i, 10) {      // 0から9までの数字の探索
    rep(j, N) {     // N個の文字列の探索
      rep(k, 10) {  // 文字列内の番号
        if (S[j][k] == i) {
          mn = max(mn, k);
          check[k]++;
        }
      }
    }
    ans = min(mn, time);
  }
}