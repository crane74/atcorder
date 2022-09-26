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
  int N;
  cin >> N;

  vector<int> val(N + 1), pos(N + 1);
  for (int i = 1; i <= N; i++) val[i] = i, pos[i] = i;

  int Q;
  cin >> Q;

  vector<int> x(Q);
  for (int i = 0; i < Q; i++) cin >> x[i];

  for (int i = 0; i < Q; i++) {
    int p0 = pos[x[i]];
    int p1 = p0;
    if (p0 != N)
      p1++;
    else
      p1--;
    int v0 = val[p0];
    int v1 = val[p1];
    swap(val[p0], val[p1]);
    swap(pos[v0], pos[v1]);
  }

  for (int i = 1; i <= N; i++) {
    if (i != 1) cout << ' ';
    cout << val[i];
  }
  cout << endl;
}