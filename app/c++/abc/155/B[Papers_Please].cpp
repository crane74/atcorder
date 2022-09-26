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
  int N;
  cin >> N;

  vector<int> A(N), even;
  rep(i, N) {
    cin >> A[i];
    if (A[i] % 2 == 0) even.emplace_back(i);
  }

  bool ans = true;

  rep(i, even.size()) {
    if (A[even[i]] % 3 != 0 && A[even[i]] % 5 != 0) ans = false;
  }

  if (ans) {
    cout << "APPROVED" << endl;
  } else {
    cout << "DENIED" << endl;
  }
}