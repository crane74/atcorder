#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//解答プロセス
//そのままで計算しているとpowerの値が大きくなりすぎる
// powerを計算するたびにmod(1e9+7)の計算を行う

int main() {
  int N;
  cin >> N;

  ll power = 1;
  ll split = 1e9 + 7;

  for (int i = 1; i <= N; i++) {
    power *= i;
    power = power % split;
  }

  cout << power << endl;
}