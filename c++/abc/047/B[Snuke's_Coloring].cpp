#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, H, N;
  cin >> W >> H >> N;

  vector<int> x(N), y(N), a(N);
  for (int i = 0; i < N; i++) {
    cin >> x.at(i) >> y.at(i) >> a.at(i);
  }

  for (int i = 0; i < N; i++) {
    if (a.at(i) == 1) {
      W -= x.at(i);
    }
    if (a.at(i) == 2) {
    }
    if (a.at(i) == 3) {
    }
    if (a.at(i) == 4) {
    }
  }
}