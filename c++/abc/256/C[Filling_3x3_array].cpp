
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> h(3), w(3);
  for (int i = 0; i < 3; i++) {
    cin >> h.at(i);
  }
  for (int i = 0; i < 3; i++) {
    cin >> w.at(i);
  }

  int cnt = 0;

  vector<vector<int>> num(3, vector<int>(3));
  for (int i = 1; i <= 30; i++) {
    for (int j = 1; j < 30; j++) {
      for (int k = 1; k < 30; k++) {
        for (int l = 1; l < 30; l++) {
          num.at(0).at(0) = i;
          num.at(1).at(0) = j;
          num.at(2).at(0) = w.at(0) - (i + j);
          num.at(0).at(1) = k;
          num.at(1).at(1) = l;
          num.at(2).at(1) = w.at(1) - (k + l);
          num.at(0).at(2) = h.at(0) - (i + k);
          num.at(1).at(2) = h.at(1) - (j + l);
          num.at(2).at(2) = h.at(2) - (num.at(2).at(0) + num.at(2).at(1));

          if (h.at(0) == num.at(0).at(0) + num.at(0).at(1) + num.at(0).at(2) &&
              h.at(1) == num.at(1).at(0) + num.at(1).at(1) + num.at(1).at(2) &&
              h.at(2) == num.at(2).at(0) + num.at(2).at(1) + num.at(2).at(2) &&
              w.at(0) == num.at(0).at(0) + num.at(1).at(0) + num.at(2).at(0) &&
              w.at(1) == num.at(0).at(1) + num.at(1).at(1) + num.at(2).at(1) &&
              w.at(2) == num.at(0).at(2) + num.at(1).at(2) + num.at(2).at(2)) {
            cnt++;
          }
        }
      }
    }
  }

  cout << cnt << endl;
}