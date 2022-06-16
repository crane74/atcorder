#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(3), b(3);
  vector<vector<int>> c(3, vector<int>(3)), C(3, vector<int>(3));

  int cnt = 0;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> c.at(i).at(j);
    }
  }

  for (int i = 0; i <= c.at(0).at(0); i++) {
    a.at(0) = i;

    for (int j = 0; j < 3; j++) {
      b.at(j) = c.at(0).at(j) - a.at(0);
    }

    for (int j = 1; j < 3; j++) {
      a.at(j) = c.at(j).at(0) - b.at(0);
    }

    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 3; k++) {
        C.at(j).at(k) = a.at(j) + b.at(k);
        if (c.at(j).at(k) == C.at(j).at(k)) {
          cnt++;
        }
      }
    }

    if (cnt == 9) {
      cout << "Yes" << endl;
      break;
    } else {
      cout << "No" << endl;
      break;
    }

    cnt = 0;
  }
}