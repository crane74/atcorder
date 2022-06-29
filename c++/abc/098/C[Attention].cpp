#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//解答プロセス
//西からi番目の人をリーダーとしたとき、向きを変えるのは以下の人達の合計である
// 1~i-1番目にいて、西を向いている人達
// i+1~N番目にいて、東を向いている人達

int main() {
  ll N;
  cin >> N;

  string S;
  cin >> S;

  ll cnt = 0, min = N;

  for (int i = 0; i < N; i++) {
    cnt = 0;
    for (int j = 0; j < N; j++) {
      if (j == i) {
        continue;
      }

      if (j < i) {
        if (S[j] == 'W') {
          cnt++;
        }
      } else {
        if (S[j] == 'E') {
          cnt++;
        }
      }
    }
    if (cnt < min) {
      min = cnt;
    }
  }

  cout << min << endl;
}