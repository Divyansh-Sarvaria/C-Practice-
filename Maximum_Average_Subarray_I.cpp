#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  double findMaxAverage(vector<int> &nums, int k)
  {
    double sum = 0;
    for (int i = 0; i < k; i++)
      sum += nums[i];
    double nxtsum = sum;
    for (int i = k; i < nums.size(); i++)
    {
      sum += nums[i] - nums[i - k];
      nxtsum = max(nxtsum, sum);
    }

    return nxtsum / k;
  }
};
int main()
{
  Solution s;
  vector<int> num;
  int k = 4;
  num = {1, 12, -5, -6, 50, 3};
  int ans = s.findMaxAverage(num, k);
}