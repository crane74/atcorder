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

  vector<int> p(N);

  for (int i = 0; i < N; i++) cin >> p[i];

  vector<int> cnt(N, 0);

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      cnt[(p[i] - 1 - i + j + N) % N]++;
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++) ans = max(ans, cnt[i]);

  cout << ans << endl;
}