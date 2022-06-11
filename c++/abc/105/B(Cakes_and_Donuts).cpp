#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int flag = 0;

  for (int i = 0; i <= (N / 4); i++)
  {
    for (int j = 0; j <= (N / 7); j++)
    {
      if (i * 4 + j * 7 == N)
      {
        flag = 1;
      }
    }
  }

  if (flag)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}