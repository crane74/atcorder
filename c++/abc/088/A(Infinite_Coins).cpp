#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, A;
  cin >> N >> A;

  int ans = N % 500;
  if (ans <= A)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}