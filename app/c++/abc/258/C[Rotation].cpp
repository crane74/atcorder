#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)

using namespace std;
using ll = long long;

// 答えは出るがTLE

int main() {
  ll N, Q;
  cin >> N >> Q;

  string S;
  cin >> S;

  vector<pair<int, int>> q;
  rep(i, Q) {
    int a, b;
    cin >> a >> b;
    q.push_back(make_pair(a, b));
  }

  for (auto i = q.begin(); i != q.end(); i++) {
    if (i->first == 1) {
      string matubi = S.substr(N - i->second);
      S.erase(S.begin() + N - i->second, S.end());
      S = matubi + S;
    }

    else if (i->first == 2) {
      cout << S[i->second - 1] << endl;
    }
  }
}