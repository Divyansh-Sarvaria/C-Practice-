#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  int longestSubarray(vector<int> &nums)
  {
    int rgt = 0, zer = 0, lft = 0, ans = 0;
    for (int rgt = 0; rgt < nums.size(); rgt++)
    {
      if (nums[rgt] == 0)
      {
        zer++;
      }
      while (zer > 1)
      {
        if (nums[lft] == 0)
        {
          zer--;
        }
        lft++;
      }
      ans = max(ans, rgt - lft);
    }
    return ans;
  }
};
int main()
{
  Solution s;
  vector<int> z = {1, 1, 0, 1};
  int x = s.longestSubarray(z);
  cout << x;
}