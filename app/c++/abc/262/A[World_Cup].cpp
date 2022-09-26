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
  int Y;
  cin >> Y;

  int test = Y % 4;

  if (test == 0) {
    cout << Y + 2 << endl;
  } else if (test == 1) {
    cout << Y + 1 << endl;
  } else if (test == 2) {
    cout << Y << endl;
  } else if (test == 3) {
    cout << Y + 3 << endl;
  }
}