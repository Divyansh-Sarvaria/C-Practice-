#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int maxArea(vector<int> &height)
  {
    int left = 0, right = height.size() - 1;
    int maxar = 0;

    while (left < right)
    {
      int h = min(height[left], height[right]);
      int w = right - left;
      int area = h * w;
      if (area > maxar)
        maxar = area;

      if (height[left] < height[right])
        left++;
      else
        right--;
    }
    return maxar;
  }
};
int main()
{
  Solution s;
  vector<int> x = {0, 2};
  s.maxArea(x);
}