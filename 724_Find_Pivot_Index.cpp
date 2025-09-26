#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  int pivotIndex(vector<int> &nums)
  {
    int prf = 0, tsum = 0;
    for (int n : nums)
    {
      tsum += n;
    }
    for (int i = 0; i < nums.size(); i++)
    {
      int rgtsm = tsum - prf - nums[i];
      if (prf == rgtsm)
      {
        return i;
        prf += nums[i];
      }
    }
    return -1;
  }
};
int main()
{
  Solution s;
  vector<int> x = {1, 7, 3, 6, 5, 6};
  s.pivotIndex(x);
}