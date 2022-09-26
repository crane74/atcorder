#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//解答プロセス
//#に隣接している#が無ければ目標を達成できない
//#のあるマス目に対して、上下左右を確認する

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<char>> s(W, vector<char>(H));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> s[i][j];
    }
  }

  int flag = 1;

  for (int y = 0; y < H; y++) {
    for (int x = 0; x < W; x++) {
      int num = 0;

      if (s[y][x] == '.') {
        continue;
      }

      if (s[y][x - 1] != '#' && s[y][x + 1] != '#' && s[y - 1][x] != '#' &&
          s[y + 1][x] != '#') {
        flag = 0;
      }
    }
  }

  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}