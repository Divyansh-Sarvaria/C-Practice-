#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  bool increasingTriplet(vector<int> &nums)
  {
    int cnt = 1;
    bool x;
    for (int i = 0; i <= nums.size() - 1; i++)
    {
      if (nums[i] < nums[i + 1] && cnt != 3)
      {
        cnt++;
      }

      else if (nums[i] > nums[i + 1] && cnt != 3)
      {
        cnt = 1;
      }
    }
    if (cnt == 3)
    {
      x = true;
    }
    else
    {
      x = false;
    }
    cout << cnt << endl;
    cout << x;
    return x;
  }
};
int main()
{
  Solution s;
  vector<int> a = {1, 2, 4, 5};
  s.increasingTriplet(a);
}