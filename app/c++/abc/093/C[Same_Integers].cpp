#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//解答プロセス
// 1. 偶奇を揃える
// 2. 数字が小さいものから2ずつ増やしていく

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int cnt = 0;

  //偶奇を揃える
  if ((A % 2 == 0 && B % 2 == 0 && C % 2 != 0) ||
      (A % 2 != 0 && B % 2 != 0 && C % 2 == 0)) {
    cnt += 1;
    A += 1;
    B += 1;
  } else if ((A % 2 != 0 && B % 2 == 0 && C % 2 == 0) ||
             (A % 2 == 0 && B % 2 != 0 && C % 2 != 0)) {
    cnt += 1;
    B += 1;
    C += 1;
  } else if ((A % 2 != 0 && B % 2 == 0 && C % 2 != 0) ||
             (A % 2 == 0 && B % 2 != 0 && C % 2 == 0)) {
    cnt += 1;
    C += 1;
    A += 1;
  }

  //数字が小さいものから２ずつ増やす
  vector<int> x(3);
  x[0] = A;
  x[1] = B;
  x[2] = C;

  sort(x.begin(), x.end());

  while (x[2] > x[1]) {
    x[1] += 2;
    cnt++;
  }

  while (x[2] > x[0]) {
    x[0] += 2;
    cnt++;
  }

  cout << cnt << endl;
}