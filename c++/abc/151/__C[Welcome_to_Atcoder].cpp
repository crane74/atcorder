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
  ll N, M;
  cin >> N >> M;

  vector<vector<string>> test(N);
  rep(i, M) {
    int num;
    string AC_or_WC;
    cin >> num >> AC_or_WC;
    num--;

    test[num].emplace_back(AC_or_WC);
  }

  ll correct = 0, incorrect = 0;
  rep(i, N) {
    rep(j, test[i].size()) {
      if (test[i][j] == "WA") {
        incorrect++;

        if (j == test[i].size() - 1) {
          if (correct == 0) incorrect = 0;
        }
        continue;
      }

      if (test[i][j] == "AC") {
        correct++;
        break;
      }
    }
  }

  cout << correct << " " << incorrect << endl;
}