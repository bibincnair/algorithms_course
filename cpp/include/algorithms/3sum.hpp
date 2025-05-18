#include <algorithm>
#include <vector>
using std::vector;

namespace sum {
class Solution
{
public:
  vector<vector<int>> threeSum(vector<int> &nums)
  {
    std::ranges::sort(nums);
    // [-1,0,1,2,-1,-4] --> [-4, -1, -1, 0, 1, 2]
    vector<vector<int>> output;
    for (size_t i = 0; i + 2 < nums.size(); i++) {
      if (i > 0 && nums[i] == nums[i - 1]) { continue; }
      size_t start = i + 1;
      size_t end = nums.size() - 1;
      while (start < end) {
        int sum = nums[i] + nums[start] + nums[end];
        if (sum == 0) {
          output.push_back({ nums[i], nums[start], nums[end] });
          while (start < end && nums[start] == nums[start + 1]) { start++; }
          while (start < end && nums[end] == nums[end - 1]) { end--; }
          start++;
          end--;
        } else if (sum < 0) {
          start++;
        } else {
          end--;
        }
      }
    }
    return output;
  }
};
}// namespace sum