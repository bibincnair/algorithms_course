#include <algorithm>
#include <vector>
using std::vector;

namespace rotate_array {
class Solution
{
public:
  void rotate(vector<int> &nums, int k)
  {
    if (nums.empty()) return;
    std::reverse(nums.begin(), nums.end(    ));
    std::reverse(nums.begin(), nums.begin() + k);
    std::reverse(nums.begin() + k, nums.end());
  }
};
}// namespace rotate_array