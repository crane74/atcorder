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

// 解答プロセス
// (a_i=iかつa_j=j)もしくは(a_j=iかつa_i=j)であればよい

int main() {
  ll N;
  cin >> N;

  vector<ll> a(N);
  ll same = 0;
  rep(i, N) {
    cin >> a[i];
    a[i]--;
    if (a[i] == i) same++;
  }

  ll ans = same * (same - 1) / 2;
  rep(i, N) {
    if (a[i] > i && a[a[i] == i]) ans++;
  }

  cout << ans << endl;
}