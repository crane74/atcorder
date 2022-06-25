#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//ほとんどTLEとなっていた

int main() {
  ll N;
  cin >> N;

  string S;
  cin >> S;

  vector<ll> W(N);
  for (int i = 0; i < N; i++) {
    cin >> W[i];
  }

  vector<ll> w(N);
  w = W;
  sort(w.begin(), w.end());

  int min = w.front();
  int max = w.back();

  vector<ll> test(N + 2);
  for (int i = 0; i < N - 1; i++) {
    test[i] = ((w[i + 1] + w[i]) / 2);
  }

  test.push_back(min - 1);
  test.push_back(max + 1);

  int cnt = 0, ans = 0;

  for (auto& num : test) {
    cnt = 0;
    for (int j = 0; j < N; j++) {
      if (S[j] == '1') {
        if (W[j] >= num) {
          cnt++;
        }
      }
      if (S[j] == '0') {
        if (W[j] < num) {
          cnt++;
        }
      }
      if (ans < cnt) {
        ans = cnt;
      }
    }
  }

  cout << ans << endl;
}