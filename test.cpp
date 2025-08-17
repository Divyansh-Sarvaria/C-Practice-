#include <iostream>
#include <string>
using namespace std;
int main()
{
  string s;
  char c[10];
  s = "this ";
  for (int i = 0; s[i] < s.length(); i++)
  {
    int q = 0;
    c[q] = s[i];
    q++;
  }
  while (int i = 0 < s.length())
  {
    cout << s[i];
    i++;
  }
}