#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;

  int ans = 0;

  for (int i = A; i <= B; i++)
  {
    string s = to_string(i);

    string S = s;
    reverse(S.begin(), S.end());

    if (s == S)
      ans++;
  }

  cout << ans << endl;
}