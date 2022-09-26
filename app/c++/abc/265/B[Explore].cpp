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
  ll N, M, T;
  cin >> N >> M >> T;

  vector<ll> A(N - 1), X(M), Y(M), bonus(N - 1, 0);
  rep(i, N - 1) cin >> A[i];
  rep(i, M) {
    cin >> X[i] >> Y[i];
    bonus[X[i] - 2] = Y[i];
  }

  rep(i, N - 1) {
    T -= A[i];
    if (T <= 0) {
      cout << "No" << endl;
      return 0;
    }

    T += bonus[i];
  }

  cout << "Yes" << endl;
}