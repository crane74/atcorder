#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int ans = 0;

  while (N > 0) {
    N /= K;
    ans++;
  }

  cout << ans << endl;
}