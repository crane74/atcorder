#include <bits/stdc++.h>
using namespace std;

int cumulative_sum(int left, int right) {
  int sum = 0;
  for (int i = left; i < right; i++) {
    sum += i;
  };
  return sum;
}

int main() {
  int N;
  cin >> N;

  vector<int> L(N), R(N);
  for (int i = 0; i < N; i++) {
    cin >> L.at(i) >> R.at(i);
  }
}