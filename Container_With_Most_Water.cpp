#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  int maxArea(vector<int> &height)
  {
    int no1, no2,
        area = 1, maxar = 0, wdh = 0;
    for (int i = 0; i < height.size(); i++)
    {
      no1 = height[i];
      for (int j = i + 1; j < height.size(); j++)
      {
        no2 = height[j];
        wdh = j - i;
        area = min(no1, no2) * wdh;
        if (area > maxar)
        {
          maxar = area;
        }
      }
    }
    cout << maxar << endl;
    return maxar;
  }
};
int main()
{
  Solution s;
  vector<int> x = {0, 2};
  s.maxArea(x);
}