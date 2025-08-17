#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
  string reverseWords(string s)
  {
    int len = s.length();
    int i;
    string res = "", hld = "";
    for (i = len - 1; i >= 0; i--)
    {
      if (s[i] != ' ')
      {
        hld = s[i] + hld;
      }
      else if (!hld.empty())
      {
        res += hld + " ";
        hld = "";
      }
    }
    if (!hld.empty())
    {
      res += hld;
    }
    else if (!res.empty() && res.back() == ' ')
    {
      res.pop_back(); // Remove trailing space
    }
    // cout << res;
    return res;
  }
};
int main()
{
  Solution s;
  string str = "this is a string";
  s.reverseWords(str);
}