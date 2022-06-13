#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int count = 0;
  int flg = 0;

  while (true) {
    for (int i = 0; i < N; i++) {
      if (A.at(i) % 2 != 0) {
        flg = 1;
      }
    }

    if (flg) {
      break;
    }

    for (int i = 0; i < N; i++) {
      A.at(i) /= 2;
    }
    count++;
  }

  cout << count << endl;
}