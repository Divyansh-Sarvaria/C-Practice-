#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
  vector<int> productExceptSelf(vector<int> &nums)
  {
    int i, prod = 1;
    vector<int> num2;
    for (i = 0; i < nums.size(); i++)
    {
      prod = 1;
      for (int j = 0; j < nums.size(); j++)
      {
        if (j == i)
          continue;
        prod = prod * nums[j];
      }
      num2.push_back(prod);
    }
    for (i = 0; i < num2.size(); i++)
    {
      cout << num2[i] << " " << ends;
    }
  }
};
int main()
{
  Solution s;
  vector<int> v = {1, 2, 3, 4, 5};
  s.productExceptSelf(v);
}