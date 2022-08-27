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

bool cross_product(vector<int> A, vector<int> B, vector<int> C) {
  return (A[0] - B[0]) * (C[1] - B[1]) - (A[1] - B[1]) * (C[0] - B[0]) > 0
             ? true
             : false;
}
int main() {
  vector<int> A(2), B(2), C(2), D(2);
  rep(i, 2) cin >> A[i];
  rep(i, 2) cin >> B[i];
  rep(i, 2) cin >> B[i];
  rep(i, 2) cin >> D[i];

  bool a = cross_product(A, B, C);

  bool ans = cross_product(A, B, C) and cross_product(B, C, D) and
             cross_product(C, D, A) and cross_product(D, A, B);

  YesNo(ans);
}