#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;  //長さ
  int K;  //与えられる整数

  cin >> N >> K;

  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }

  int flag = 0;

  for (int i = 0; i < N; i++) {
    if (a.at(i + 1) < a.at(i)) {
      flag = 1;
    }
  }

  if (flag) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
}