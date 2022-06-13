#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<long long> a(3 * N);
  for (int i = 0; i < 3 * N; i++)
  {
    cin >> a.at(i);
  }

  sort(a.begin(), a.end());

  long long sum = 0;
  for (int i = N; i < 3 * N; i += 2)
  {
    sum += a.at(i);
  }

  cout << sum << endl;
}