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

  map<ll, ll> a;
  rep(i, N) {
    int num;
    cin >> num;
    a[num]++;
  }

  ll cnt = 0;

  for (auto i = a.begin(); i != a.end(); i++) {
    if (i->first == i->second)
      continue;
    else if (i->first > i->second) {
      cnt += i->second;
    } else {
      cnt += (i->second - i->first);
    }
  }

  cout << cnt << endl;
}