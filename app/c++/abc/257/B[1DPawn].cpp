#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int K, N, Q;
  cin >> N >> K >> Q;

  vector<int> A(K + 1), L(Q);
  for (int i = 0; i < K; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < Q; i++) {
    cin >> L[i];
  }

  //ある操作をQ回行う
  for (int i = 0; i < Q; i++) {
    if (A[L[i] - 1] == N) {
      continue;
    }

    if (A[L[i] - 1] + 1 != A[L[i]]) {
      A[L[i] - 1] += 1;
    }
  }

  for (int i = 0; i < K; i++) {
    cout << A[i] << " ";
  }
  cout << endl;
}
