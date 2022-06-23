#include <bits/stdc++.h>
using namespace std;

string hantei(bool flag) {
  if (flag) {
    return "Yes";
  } else {
    return "No";
  }
}

int main() {
  int N;
  cin >> N;

  vector<int> t(N + 1), x(N + 1), y(N + 1);
  t[0] = x[0] = y[0] = 0;
  for (int i = 1; i <= N; i++) {
    cin >> t[i] >> x[i] >> y[i];
  }

  bool flag = 1;
  for (int i = 0; i < N; i++) {
    int dt = t[i + 1] - t[i];
    int dist = abs(x[i + 1] - x[i]) + abs(y[i + 1] - y[i]);

    if (dt < dist || dist % 2 != dt % 2) {
      flag = 0;
    }
  }

  cout << hantei(flag) << endl;
}