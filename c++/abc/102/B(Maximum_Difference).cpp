#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<long long> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A.at(i);
  }

  sort(A.begin(), A.end());

  cout << A.back() - A.front() << endl;
}