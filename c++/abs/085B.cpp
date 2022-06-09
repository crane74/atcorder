#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> d(N + 1, -1);
  for (int i = 0; i < N; i++)
  {
    cin >> d.at(i);
  }

  sort(d.begin(), d.end());

  int counter = 0;

  for (int i = 0; i < N; i++)
  {
    if (d.at(i) < d.at(i + 1))
    {
      counter++;
    }
  }

  cout << counter << endl;
}