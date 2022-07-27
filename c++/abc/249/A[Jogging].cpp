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

int dist(int a, int b, int c, int x) {
  int dist = 0;
  rep(i, x) {
    if (i % (a + c) < a) dist += b;
  }
  return dist;
}

int main() {
  int a, b, c, d, e, f, x;
  cin >> a >> b >> c >> d >> e >> f >> x;

  int takahashi = dist(a, b, c, x);
  int aoki = dist(d, e, f, x);

  if (takahashi > aoki) {
    cout << "Takahashi" << endl;
  } else if (takahashi < aoki) {
    cout << "Aoki" << endl;
  } else {
    cout << "Draw" << endl;
  }
}