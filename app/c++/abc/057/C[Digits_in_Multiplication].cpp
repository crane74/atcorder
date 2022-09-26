#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int count_digits(ll N) {
  int digits = 0;
  while (N > 0) {
    N /= 10;
    digits++;
  }
  return digits;
}

int main() {
  long long N;
  cin >> N;

  int ans = count_digits(N);

  for (ll i = 1; i <= sqrt(N); i++) {
    int A = i;
    if (N % A == 0) {
      ll B = N / A;

      int F = max(count_digits(A), count_digits(B));

      if (F < ans) {
        ans = F;
      }
    }
  }

  cout << ans << endl;
}