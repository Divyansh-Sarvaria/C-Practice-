#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  void moveZeroes(vector<int> &nums)
  {
    int i = 0, j = 0;

    int *p1 = &nums[0];
    int *p2 = &nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
      if (*p1 != 0)
      {
        *p2 = *p1;
        p2++;
      }
      p1++;
    }
    while (p2 < &nums[0] + nums.size())
    {
      *p2 = 0;
      p2++;
    }

    for (int i = 0; i < nums.size(); i++)
    {
      cout << nums[i] << "\t";
    }
  }
};
int main()
{
  Solution v;
  vector<int> no = {0, 1, 0, 3, 12};
  v.moveZeroes(no);
}