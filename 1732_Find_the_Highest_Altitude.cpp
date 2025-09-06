#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  int largestAltitude(vector<int> &gain)
  {
    int mx = 0, alt = 0;
    for (int i = 0; i < gain.size(); i++)
    {
      alt += gain[i];
      mx = max(mx, alt);
    }
    return mx;
  }
};
int main()
{
  Solution s;
  vector<int> x = {-5, 1, 5, 0, -7};
  int res = s.largestAltitude(x);
  cout << res;
}