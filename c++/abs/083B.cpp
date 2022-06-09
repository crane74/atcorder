#include <bits/stdc++.h>
using namespace std;

int N, A, B;

int souwa(int n)
{
  int sum = 0;
  while (n > 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main()
{
  cin >> N >> A >> B;

  int total = 0;
  for (int i = 0; i < N + 1; i++)
  {
    if (souwa(i) >= A && souwa(i) <= B)
    {
      total += i;
    }
  }

  cout << total << endl;
}