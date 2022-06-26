#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  int low = max(A, C);
  int up = min(B, D);

  cout << max(0, up - low) << endl;
}