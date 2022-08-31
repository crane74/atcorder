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
  int N;
  cin >> N;

  vector<pair<string, string>> Nickname;
  rep(i, N) {
    string s, t;
    cin >> s >> t;
    Nickname.emplace_back(s, t);
  }

  bool ans = true;

  rep(i, N) {
    rep(j, N) {
      if (i == j) continue;

      if (Nickname[i].first == Nickname[j].first &&
          Nickname[i].first == Nickname[j].second &&
          Nickname[i].first == Nickname[j].first &&
          Nickname[i].first == Nickname[j].first)
        ans = false;
    }
  }
}