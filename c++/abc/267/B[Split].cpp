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
  string s;
  cin >> s;

  vector<bool> row(7);
  row[0] = (s[6] == '1');
  row[1] = (s[3] == '1');
  row[2] = (s[7] | s[1]) == '1';
  row[3] = (s[4] == '1');
  row[4] = (s[8] | s[2]) == '1';
  row[5] = (s[5] == '1');
  row[6] = (s[9] == '1');

  bool ans = false;

  if (s[0] == '1') {
    ans = false;
  } else {
    // if (row[0] & row[2] & !row[1]) ans = true;
    // if (row[0] & not(row[1] & row[2]) & row[3]) ans = true;
    // if (row[0] & !(row[1] & row[2] & row[3]) & row[4]) ans = true;
    // if (row[0] & !(row[1] & row[2] & row[3] & row[4]) & row[5]) ans = true;
    // if (row[0] & !(row[1] & row[2] & row[3] & row[4] & row[5]) & row[6])
    //   ans = true;

    // if (row[1] & !row[2] & !row[3]) ans = true;
    // if (row[1] & !(row[2] & row[3]) & row[4]) ans = true;
    // if (row[1] & !(row[2] & row[3] & row[4]) & row[5]) ans = true;
    // if (row[1] & !(row[2] & row[3] & row[4] & row[5]) & row[6]) ans = true;

    // if (row[2] & !row[3] & row[4]) ans = true;
    // if (row[2] & !(row[3] & row[4]) & row[5]) ans = true;
    // if (row[2] & !(row[3] & row[4] & row[5]) & row[6]) ans = true;

    // if (row[3] & !row[4] & row[5]) ans = true;
    // if (row[3] & !(row[4] & row[5]) & row[6]) ans = true;

    rep(i, 5) {
      reps(j, i + 2, 7) {
        if (row[i] & row[j]) {
          reps(k, i + 1, j) {
            if (!row[k]) ans = true;
          }
        }
      }
    }
  }

  YesNo(ans);
}