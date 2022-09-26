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
  ll N, M, E, Q;
  cin >> N >> M >> E;

  vector<pair<ll, ll>> U, V;
  rep(i, E) {
    ll u, v;
    cin >> u >> v;
    U.emplace_back(u - 1, i);
    V.emplace_back(v - 1, i);
  }

  cin >> Q;
  vector<ll> X(Q);
  rep(i, Q) {
    cin >> X[i];
    X[i]--;
  }
  vector<ll> connect;
  rep(i, N + M) {}

  rep(i, Q) {}
}