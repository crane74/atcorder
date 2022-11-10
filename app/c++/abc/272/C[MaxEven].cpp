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

  vector<int> A(N);
  rep(i, N) cin >> A[i];

  //入力を奇数と偶数に分ける
  vector<int> odd, even;
  rep(i, N) A[i] % 2 ? even.emplace_back(A[i]) : odd.emplace_back(A[i]);

  //配列を降順ソート
  sort(rall(even));
  sort(rall(odd));

  //最大値を計算
  int mx = -1;
  if (odd.size() >= 2) mx = max(mx, odd[0] + odd[1]);
  if (even.size() >= 2) mx = max(mx, even[0] + even[1]);

  cout << mx << endl;
}