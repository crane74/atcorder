#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;

  vector<vector<int>> X(N, vector<int>(D));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < D; j++) {
      cin >> X.at(i).at(j);
    }
  }

  int ans = 0;

  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      int dd = 0;
      for (int k = 0; k < D; k++) {
        dd += pow(X.at(i).at(k) - X.at(j).at(k), 2);
      }

      int sq = sqrt(dd);
      for (int x = 0; x < sq + 1; x++) {
        if (x * x == dd) {
          ans++;
          break;
        }
      }
    }
  }

  cout << ans << endl;
}