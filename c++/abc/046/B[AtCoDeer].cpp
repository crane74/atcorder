#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//解答プロセス
//横並びのボールなので最初のボールの色を決めると(K通り)、残りのボールの場合は全てK-1通りと決まる
// K x (K-1)^(n-1)を計算すれば良い

int main() {
  int N, K;
  cin >> N >> K;

  ll ans = K * pow(K - 1, N - 1);

  cout << ans << endl;
}