#include <iostream>
using namespace std;
class Solution
{
public:
  bool isSubsequence(string s, string t)
  {
    int len1 = s.length(),
        len2 = t.length(),
        i = 0, j = 0,
        cnt = len1;
    while (j < len2 && i < len1)
    {
      if (s[i] == t[j])
      {
        i++;
        j++;
        cnt--;
      }
      else if (s[i] != t[j])
      {
        j++;
      }
    }
    if (cnt == 0)
    {
      cout << "match flound";
      return true;
    }
    cout << "match not found";
    return false;
  }
};
int main()
{
  Solution s;
  string a = "abc", b = "bhgdc";
  s.isSubsequence(a, b);
}