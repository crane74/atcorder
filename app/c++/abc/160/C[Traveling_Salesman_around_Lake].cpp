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
  ll K, N;
  cin >> K >> N;

  bool inverse = false;

  vector<ll> A(N);
  rep(i, N) cin >> A[i];

  ll ans = A.back() - A.front();

  reps(i, 1, N) {
    ll i_to_start = K - A[i];
    ll start_to_i = A[i - 1];

    ll ans1 = i_to_start + start_to_i;
    if (ans1 < ans) ans = ans1;
  }

  cout << ans << endl;
}