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
  int N, M;
  cin >> N >> M;

  vector<vector<bool>> bridge(N, vector<bool>(N));
  rep(i, M) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    bridge[u][v] = bridge[v][u] = true;
  }

  int ans = 0;
  rep(i, N) {
    reps(j, i + 1, N) {
      reps(k, j + 1, N) {
        if (bridge[i][j] && bridge[j][k] && bridge[k][i]) ans++;
      }
    }
  }

  cout << ans << endl;
}