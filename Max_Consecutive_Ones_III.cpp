#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  int longestOnes(vector<int> &nums, int k)
  {
    int i,
        sz = nums.size(), rt = 0, lft = 0, zrcnt = 0, maxlen = 0;
    for (rt = 0; rt < sz; rt++)
    {
      if (nums[rt] == 0)
      {
        zrcnt++;
      }
      while (zrcnt > k)
      {
        if (nums[lft] == 0)
        {
          zrcnt--;
        }
        lft++;
      }
      maxlen = max(maxlen, rt - lft + 1);
    }
    return maxlen;
  }
};
int main()
{
  Solution s;
  vector<int> num = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
  int k = 2;
  int ans = s.longestOnes(num, k);
  printf("%d", ans);
}