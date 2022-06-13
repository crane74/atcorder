#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, x;
  cin >> N >> x;

  int A = 0;
  vector<int> a(N);
  for (int i = 0; i < N; i++)
  {
    cin >> a.at(i);
    A += a.at(i);
  }

  sort(a.begin(), a.end());

  int count = 0;
  int sum = x;
  for (int i = 0; i < N; i++)
  {
    if (sum < a.at(i))
      break;
    sum -= a.at(i);
    count++;
  }
  if (A < x)
  {
    cout << N - 1 << endl;
  }
  else
  {
    cout << count << endl;
  }
}
