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
  string S;
  cin >> S;

  string s = "atcoder";

  int ans = 0;

  if (S[0] != 'a') {
    int num = 0;
    rep(i, 7) {
      if (S[i] == 'a') {
        num = i;
        break;
      }
    }
    ans += num;
    while (S[0] != 'a') {
      swap(S[num - 1], S[num]);
      num--;
    }
  }

  if (S[1] != 't') {
    int num = 0;
    rep(i, 7) {
      if (S[i] == 't') {
        num = i;
        break;
      }
    }
    ans += num - 1;
    while (S[1] != 't') {
      swap(S[num - 1], S[num]);
      num--;
    }
  }

  if (S[2] != 'c') {
    int num = 0;
    rep(i, 7) {
      if (S[i] == 'c') {
        num = i;
        break;
      }
    }
    ans += num - 2;
    while (S[2] != 'c') {
      swap(S[num - 1], S[num]);
      num--;
    }
  }

  if (S[3] != 'o') {
    int num = 0;
    rep(i, 7) {
      if (S[i] == 'o') {
        num = i;
        break;
      }
    }
    ans += num - 3;
    while (S[3] != 'o') {
      swap(S[num - 1], S[num]);
      num--;
    }
  }

  if (S[4] != 'd') {
    int num = 0;
    rep(i, 7) {
      if (S[i] == 'd') {
        num = i;
        break;
      }
    }
    ans += num - 4;
    while (S[4] != 'd') {
      swap(S[num - 1], S[num]);
      num--;
    }
  }

  if (S[5] != 'e') {
    int num = 0;
    rep(i, 7) {
      if (S[i] == 'e') {
        num = i;
        break;
      }
    }
    ans += num - 5;
    while (S[6] != 'e') {
      swap(S[num - 1], S[num]);
      num--;
    }
  }

  cout << ans << endl;
}