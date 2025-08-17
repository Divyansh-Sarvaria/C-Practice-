#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
  int maxVowels(string s, int k)
  {
    int sz = s.size(),
        cnt = 0, mxcnt = 0;

    for (int i = 0; i < k; i++)
    {
      if (s[i] == 'a' || s[i] == 'e' ||
          s[i] == 'i' || s[i] == 'o' ||
          s[i] == 'u' || s[i] == 'A' ||
          s[i] == 'E' || s[i] == 'I' ||
          s[i] == 'O' || s[i] == 'U')
      {
        cnt++;
      }
    }
    if (cnt > mxcnt)
    {
      mxcnt = cnt;
    }
    for (int i = k; i < sz; i++)
    {
      if (s[i] == 'a' || s[i] == 'e' ||
          s[i] == 'i' || s[i] == 'o' ||
          s[i] == 'u' || s[i] == 'A' ||
          s[i] == 'E' || s[i] == 'I' ||
          s[i] == 'O' || s[i] == 'U')
      {
        cnt++;
      }
      if (s[i - k] == 'a' || s[i - k] == 'e' ||
          s[i - k] == 'i' || s[i - k] == 'o' ||
          s[i - k] == 'u' || s[i - k] == 'A' ||
          s[i - k] == 'E' || s[i - k] == 'I' ||
          s[i - k] == 'O' || s[i - k] == 'U')
      {
        cnt--;
      }
      mxcnt = max(cnt, mxcnt);
    }
    return mxcnt;
  }
};
int main()
{
  Solution s;
  string n = "abciiidef";
  int k = 3;
  int res = s.maxVowels(n, k);
  cout << res;
}