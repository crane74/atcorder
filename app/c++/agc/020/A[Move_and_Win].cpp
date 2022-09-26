#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//解答プロセス
//全体のマス目の偶奇によらず、アリスとボリスのマス目の偶奇が一致しているとアリスの勝ち、そうでないときはボリスの勝ち

int main() {
  int N, A, B;
  cin >> N >> A >> B;

  if ((A % 2 == 0 && B % 2 == 0) || (A % 2 != 0 && B % 2 != 0)) {
    cout << "Alice" << endl;
  } else {
    cout << "Borys" << endl;
  }
}