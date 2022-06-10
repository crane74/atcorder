#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> count(N);

  for (int i = 0; i < N; i++)
  {
    int n = i + 1;
    while (n > 1)
    {
      n /= 2;
      count.at(i)++;
    }
  }
}