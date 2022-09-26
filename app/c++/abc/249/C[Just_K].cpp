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
  int n, k;
  cin >> n >> k;

  vector<string> s(n);
  for (int i = 0; i < n; i++) cin >> s[i];

  int ans = 0;
  for (int i = 0; i < (1 << n); i++) {
    vector<int> sum(26);
    for (int j = 0; j < n; j++) {
      if ((i >> j) & 1) {
        for (int x = 0; x < s[j].size(); x++) sum[s[j][x] - 'a']++;
      }
    }
    int now = 0;
    for (int j = 0; j < 26; j++)
      if (sum[j] == k) now++;
    ans = max(ans, now);
  }

  cout << ans << endl;
}