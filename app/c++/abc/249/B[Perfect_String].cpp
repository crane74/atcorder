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
  string S;
  cin >> S;

  bool big = false, small = false, diff = false, ans = false;

  map<char, int> Diff;

  rep(i, S.size()) {
    if ('A' <= S[i] && S[i] <= 'Z') {
      big = true;
    }

    if ('a' <= S[i] && S[i] <= 'z') {
      small = true;
    }

    Diff[S[i]]++;
    if (Diff[S[i]] >= 2) diff = true;
  }

  if (small == true && big == true && diff == false) ans = true;

  YesNo(ans);
}