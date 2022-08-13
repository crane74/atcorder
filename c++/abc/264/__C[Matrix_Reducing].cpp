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
  vector<int> H(2), W(2);

  cin >> H[0] >> W[0];
  vector<vector<ll>> A(H[0], vector<ll>(W[0]));
  rep(y, H[0]) {
    rep(x, W[0]) { cin >> A[y][x]; }
  }

  cin >> H[1] >> W[2];
  vector<vector<ll>> B(H[1], vector<ll>(W[1]));
  rep(y, H[1]) {
    rep(x, W[1]) { cin >> B[y][x]; }
  }

  rep(y, H[1] - H[0]) {
    rep(x, W[1] - W[0]) {
      if (B[0][0] == A[y][x]) {
      } else {
        cout << "No" << endl;
        return 0;
      }
    }
  }
}