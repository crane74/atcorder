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

//解答プロセス
// tupleとmapを使う。mapを使うことでオリジナルのみを抽出する。
// tupleに点数と番号、文字列を格納し点数は降順・番号は昇順にソートする。

int main() {
  ll N;
  cin >> N;

  vector<tuple<ll, ll, string>> tuple_value;
  map<string, int> check;
  rep(i, N) {
    string S;
    ll T;
    cin >> S >> T;
    check[S]++;
    if (check[S] >= 2) continue;  //オリジナルのみを格納させる
    tuple_value.emplace_back(T, -(i + 1), S);
  }

  sort(rall(tuple_value));

  cout << abs(get<1>(tuple_value.front())) << endl;
}