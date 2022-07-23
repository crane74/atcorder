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

ll Manhattan_distance(ll a, ll b, ll c, ll d) {
  ll distance = abs(a - c) + abs(b - d);
  return distance;
}

int main() {
  int N, M;
  cin >> N >> M;

  vector<pair<ll, ll>> coord, check;
  rep(i, N) {
    ll a, b;
    cin >> a >> b;
    coord.emplace_back(a, b);
  }
  rep(i, M) {
    ll c, d;
    cin >> c >> d;
    check.emplace_back(c, d);
  }

  rep(i, N) {
    ll mn = 1e9;
    ll bango = 0, num = 0;

    rep(j, M) {
      num = Manhattan_distance(coord[i].first, coord[i].second, check[j].first,
                               check[j].second);
      if (num < mn) {
        mn = num;
        bango = j + 1;
      }
    }
    cout << bango << endl;
  }
}