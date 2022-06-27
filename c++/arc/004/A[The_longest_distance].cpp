#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define reps(i, n) for (int i = 1, i##_len = (n); i <= i##_len; ++i)
#define rrep(i, n) for (int i = ((int)(n)-1); i >= 0; --i)
#define rreps(i, n) for (int i = ((int)(n)); i > 0; --i)

using namespace std;
using ll = long long;

double distance(double x1, double x2, double y1, double y2) {
  return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
  int N;
  cin >> N;

  vector<double> x(N), y(N);
  rep(i, N) { cin >> x[i] >> y[i]; }

  double dis = 0, max = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      dis = distance(x[i], x[j], y[i], y[j]);

      if (dis > max) {
        max = dis;
      }
    }
  }

  cout << max << endl;
}