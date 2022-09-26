#include <bits/stdc++.h>
using namespace std;

int digits_sum(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int N;
  cin >> N;

  int min = 1e6;

  for (int i = 1; i <= N / 2; i++) {
    int d = digits_sum(i) + digits_sum(N - i);
    if (d < min) {
      min = d;
    }
  }

  cout << min << endl;
}