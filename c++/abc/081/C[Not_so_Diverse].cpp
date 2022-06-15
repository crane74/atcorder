#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> A(N);
  map<int, int> type;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
    type.at(A.at(i))++;
  }
}