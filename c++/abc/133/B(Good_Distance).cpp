#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, D;
  cin >> N >> D;

  vector<vector<int>> X(N, vector<int>(D));
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < D; j++)
    {
      cin >> X.at(i).at(j);
    }
  }
}