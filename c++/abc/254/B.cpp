#include <bits/stdc++.h>
using namespace std;

int N; //整数列の個数

int paskal(int a, int b)
{
  //ベースケース
  if (b == 0 || b == a)
  {
    return 1;
  }

  //再帰ステップ
  return paskal(a - 1, b - 1) + paskal(a - 1, b);
}

int main()
{

  cin >> N;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << paskal(i, j) << " ";

      if (j == i)
      {
        cout << endl;
      }
    }
  }
}
