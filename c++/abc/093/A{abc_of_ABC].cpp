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

// alias
using ull = unsigned long long;
using ll = long long;

using namespace std;

int main() {
  string s;
  cin >> s;

  if (s[0] != s[1] && s[1] != s[2] && s[2] != s[0]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}