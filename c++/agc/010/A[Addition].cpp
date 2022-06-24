#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//解答プロセス
//奇数 + 奇数 = 偶数、偶数+ 偶数 = 偶数
//奇数が偶数個あれば必ず最終的に数が１つになる

string judge(int num) {
  if (num % 2 == 0) {
    return "YES";

  } else {
    return "NO";
  }
}

int main() {
  ll N;
  cin >> N;

  vector<ll> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  vector<int> odd, even;
  for (int i = 0; i < N; i++) {
    if (A[i] % 2 == 0) {
      even.push_back(A[i]);
    } else {
      odd.push_back(A[i]);
    }
  }

  cout << judge(odd.size()) << endl;
}