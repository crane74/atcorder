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
#define fore(i, a) for (auto &i : a)

// alias
using ull = unsigned long long;
using ll = long long;

using namespace std;

int main() {
  vector<string> s(10);
  for (int i = 0; i < 10; i++) {
    cin >> s[i];
  }
  int a = 1e9, b = -1e9;
  int c = 1e9, d = -1e9;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (s[i][j] == '#') {
        a = min(a, i + 1);
        b = max(b, i + 1);
        c = min(c, j + 1);
        d = max(d, j + 1);
      }
    }
  }

  cout << a << " " << b << "\n";
  cout << c << " " << d << "\n";
}