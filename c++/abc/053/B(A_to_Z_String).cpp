#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  smatch m;
  regex_search(s, m, regex("A[A-Z]*Z"));
  cout << m.str().size() << endl;
}