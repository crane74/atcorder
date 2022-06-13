#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T, A;
  cin >> N >> T >> A;

  vector<long> H(N);
  double min = 1e9;
  int ans = -1;

  for (int i = 0; i < N; i++) {
    cin >> H.at(i);

    double t = T - 0.006 * H.at(i);
    double d = abs(A - t);

    if (d < min) {
      min = d;
      ans = i + 1;
    }
  }

  cout << ans << endl;
}