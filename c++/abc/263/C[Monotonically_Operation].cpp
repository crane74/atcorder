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
  int n, m;
  cin >> n >> m;
  vector<int> a;
  for (int i = 0; i < n; i++) a.push_back(0);
  for (int i = 0; i < m - n; i++) a.push_back(1);
  do {
    for (int i = 0; i < m; i++) {
      if (a[i] == 0) cout << i + 1 << " ";
    }
    cout << endl;
  } while (next_permutation(a.begin(), a.end()));
}