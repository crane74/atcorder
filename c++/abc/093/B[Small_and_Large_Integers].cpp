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

// alias
using ull = unsigned long long;
using ll = long long;

using namespace std;

int main() {
  ll A, B, K;
  cin >> A >> B >> K;

  for (int i = A; i <= min(B, A + K - 1); i++) {
    cout << i << endl;
  }

  for (int i = max(B - K + 1, A + K); i <= B; i++) {
    cout << i << endl;
  }
}