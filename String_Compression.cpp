#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  int compress(vector<char> &chars)
  {

    int n = chars.size();
    int i = 0, ind = 0;
    while (i < n)
    {
      char curr = chars[i];
      int cnt = 0;
      while (i < n && chars[i] == curr)
      {
        i++;
        cnt++;
      }
      chars[ind++] = curr;
      if (cnt > 1)
      {
        string num = to_string(cnt);
        for (char c : num)
        {
          chars[ind++] = c;
        }
      }
    }
    chars.resize(ind);
    return ind;
  }
};
int main()
{
  Solution v;
  vector<char> a = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
  v.compress(a);
}