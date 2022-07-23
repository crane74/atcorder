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
  ll N;
  cin >> N;

  vector<string> S(N);
  map<string, ll> check;
  rep(i, N) {
    cin >> S[i];
    check[S[i]]++;
    if (check[S[i]] >= 2) {
      ll test = check[S[i]] - 1;
      S[i] += '(' + to_string(test) + ')';
    }
  }

  rep(i, N) cout << S[i] << endl;
}