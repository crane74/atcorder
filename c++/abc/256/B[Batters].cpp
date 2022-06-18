#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int p = 0;
  vector<int> koma(N, 0);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
      koma.at(j) += A.at(i);
      if (koma.at(j) > 3) {
        p++;
        koma.at(j) = -1e8;
      }
    }
  }
  cout << p << endl;
}