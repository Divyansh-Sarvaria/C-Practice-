#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
  int maxOperations(vector<int> &nums, int k)
  {
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size() - 1;
    int pair = 0;

    while (left < right)
    {
      int sum = nums[left] + nums[right];

      if (sum == k)
      {
        pair++;
        left++;
        right--;
      }
      else if (sum < k)
      {
        left++;
      }
      else
      {
        right--;
      }
    }
    return pair;
  }
};
int main()
{
  Solution s;
  vector<int> n;
  int k;
  k = 5;
  n = {1, 2, 3, 4};
  s.maxOperations(n, k);
  return 0;
}