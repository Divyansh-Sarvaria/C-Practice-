#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution
{
public:
  vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
  {
    unordered_set<int> x(nums1.begin(), nums1.end());
    unordered_set<int> y(nums2.begin(), nums2.end());
    vector<int> diff1, diff2;
    for (int n : x)
    {
      if (y.find(n) == y.end())
      {
        diff1.push_back(n);
      }
    }
    for (int n : y)
    {
      if (x.find(n) == x.end())
      {
        diff2.push_back(n);
      }
    }
    return {diff1, diff2};
  }
};
int main()
{
  Solution s;
  vector<int> x = {1, 2, 3};
  vector<int> y = {2, 4, 6};
}
