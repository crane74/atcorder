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
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;

  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i];
  rep(i, N) cin >> B[i];

  vector<tuple<int, int, int>> student;
  for (int i = 0; i < N; i++) {
    student.emplace_back(A[i], B[i], i + 1);
  }

  vector<int> passing;  //合格した人を格納する

  sort(rall(student),
       [](tuple<int, int, int> const& iLhs, tuple<int, int, int> const& iRhs) {
         return get<0>(iLhs) < get<0>(iRhs);
         return get<2>(iLhs) > get<2>(iRhs);
       });

  for (int i = 0; i < X; i++) {
    passing.emplace_back(get<2>(student[i]));
    student.erase(student.begin());
  }

  cout << endl;
}