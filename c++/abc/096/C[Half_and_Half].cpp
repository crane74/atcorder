#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;

  int res = A * X + B * Y;

  for (int i = 1; i <= max(X, Y); ++i) {
    int ab = i * 2;
    int cand = C * ab + A * max(0, X - i) + B * max(0, Y - i);

    res = min(res, cand);
  }

  cout << res << endl;
}