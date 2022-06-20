#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll N;
  cin >> N;

  vector<ll> A(N);
  for (ll i = 0; i < N; i++) {
    cin >> A[i];
  }
  int cnt = 0;
  bool up = 0, down = 0;

  for (int i = 0; i < N - 1; i++) {
    if (A[i] - A[i + 1] > 0) {
      down = 1;
    } else if (A[i] - A[i + 1] < 0) {
      up = 1;
    }

    //増加から減少、減少から増加に転じる際にはup,downともにtrueになる
    if (up == 1 && down == 1) {
      cnt++;
      up = 0;
      down = 0;
    }
  }
  cout << cnt + 1 << endl;
}