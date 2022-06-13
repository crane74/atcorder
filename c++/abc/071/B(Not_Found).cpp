#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  set<char> letter;

  for (int i = 0; i < s.size(); i++)
  {
    letter.insert(s.at(i));
  }

  string alphabet = "abcdefghijklmnopqrstuvwxyz";

  for (int i = 0; i < 26; i++)
  {
    if (s.find(alphabet.at(i)) == -1)
    {
      cout << alphabet.at(i) << endl;
      break;
    }
  }

  if (letter.size() == 26)
  {
    cout << "None" << endl;
  }
}