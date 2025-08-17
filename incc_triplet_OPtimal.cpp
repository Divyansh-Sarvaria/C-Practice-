#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class Solution
{
public:
  bool increasingTriplet(vector<int> &nums)
  {
    int f = INT_MAX, s = INT_MAX;

    for (int n : nums)
    {
      if (n <= f)
      {
        f = n;
      }
      else if (n <= s)
      {
        s = n;
      }
      else
        return true;
    }
    return false;
  }
};

int main()
{
  Solution s;
  vector<int> a = {1, 2, 4, 5};
  bool result = s.increasingTriplet(a);

  if (result)
    cout << "Increasing triplet exists\n";
  else
    cout << "No increasing triplet\n";

  return 0;
}
