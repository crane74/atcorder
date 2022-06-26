#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//解答プロセス
//基本的にはbまでのxの倍数の数からaまでのxの倍数のかすを引けばよい
//ただaが0の時またはaがxの倍数の時、a自身も倍数として含むので+1をする

int main() {
  ll a, b, x;
  cin >> a >> b >> x;

  if (a == 0 || a % x == 0) {
    cout << (b / x) - (a / x) + 1 << endl;
  } else {
    cout << (b / x) - (a / x) << endl;
  }
}