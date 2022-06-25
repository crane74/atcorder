#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//解答プロセス
//入力値をmap関数のキーとして格納し、値が奇数の場合のみカウントする

int main() {
  ll N;
  cin >> N;

  vector<ll> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  map<ll, int> map_data;
  for (int i = 0; i < N; i++) {
    map_data[A[i]]++;
  }

  int cnt = 0;

  for (auto i = map_data.begin(); i != map_data.end(); i++) {
    if (i->second % 2 != 0) {
      cnt++;
    }
  }

  cout << cnt << endl;
}