#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N;

  map<string, int> word{};
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    word[s]++;
  }

  cin >> M;

  for (int i = 0; i < M; i++) {
    string t;
    cin >> t;
    word[t]--;
  }

  int money = 0;
  for (auto i = word.begin(); i != word.end(); i++) {
    money = max(money, i->second);
  }

  cout << money << endl;
}
