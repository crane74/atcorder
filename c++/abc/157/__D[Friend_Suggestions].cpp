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
  ll N, M, K;
  cin >> N >> M >> K;

  vector<ll> A(M), B(M), C(K), D(K);
  vector<vector<int>> Friend(M), Block(M), Friend_candidate(N);
  rep(i, M) {
    cin >> A[i] >> B[i];
    A[i]--;
    B[i]--;
    Friend[A[i]].emplace_back(B[i]);
    Friend[B[i]].emplace_back(A[i]);
  }
  rep(i, K) {
    cin >> C[i] >> D[i];
    C[i]--;
    D[i]--;
    Block[C[i]].emplace_back(D[i]);
    Block[D[i]].emplace_back(C[i]);
  }

  rep(i, N) {
    if (Friend[i].empty() && Block[i].empty()) {
    }
  }
}