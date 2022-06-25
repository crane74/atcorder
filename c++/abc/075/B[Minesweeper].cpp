#include <bits/stdc++.h>
using namespace std;
using ll = long long;

//解答プロセス
//単純にマス目周囲８マスの中に#が何個あるかを数えるだけ
//ここではdt={-1,0,1} dy={-1,0,-1}を用いて、マス目の周囲を探索している

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  for (int i = 0; i < H; i++) {
    cin >> S[i];
  }

  for (int y = 0; y < W; y++) {
    for (int x = 0; x < H; x++) {
      //↓Segmentation fault
      if (S[y][x] == '.') {
        int num = 0;

        for (int dx = -1; dx <= 1; dx++) {
          for (int dy = -1; dy <= 1; dy++) {
            if (dx == 0 && dy == 0) {
              continue;
            }
            int xx = x + dx;
            int yy = y + dy;

            if (xx >= 0 && xx < W && yy >= 0 && yy < H) {
              if (S[yy][xx] == '#') {
                num++;
              }
            }
          }
        }
        S[y][x] = char(num);
      }
    }
  }
  for (int i = 0; i < H; i++) {
    cout << S[i] << endl;
  }
}