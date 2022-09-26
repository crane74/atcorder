#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> a(M), b(M);
  for (int i = 0; i < M; i++) {
    cin >> a.at(i) >> b.at(i);
  }

  vector<int> road(N, 0);

  for (int i = 0; i < M; i++) {
    road.at(a.at(i) - 1) += 1;
    road.at(b.at(i) - 1) += 1;
  }

  for (int i = 0; i < N; i++) {
    cout << road.at(i) << endl;
  }
}