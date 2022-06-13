#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> m(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> m.at(i);
    sum += m.at(i);
  }

  int leftover = X - sum;

  sort(m.begin(), m.end());

  int count = leftover / m.front();

  cout << N + count << endl;
}