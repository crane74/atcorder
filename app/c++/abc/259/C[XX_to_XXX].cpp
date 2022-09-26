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
  string s, t;
  cin >> s >> t;

  bool ans = false;

  if (s.size() > t.size()) {
    ans = false;
  } else {
    rep(i, t.size()) {
      if ((s[i - 1] != s[i] && s[i] != s[i + 1] && t[i] == t[i + 1]))
        break;
      else if (s[i] == t[i])
        continue;
      else {
        if (s[i] != s[i + 1] && t[i] == t[i + 1])
          break;
        else {
          s.insert(s.begin() + i, s[i - 1]);
        }
      }
    }

    if (s == t) {
      ans = true;
    }
  }

  YesNo(ans);
}