#include <vector>
using std::vector;

namespace max_jump_two {
class Solution
{
public:
  int jump(vector<int> &nums)
  {

    if (nums.empty()) return 0;
    if (nums.size() == 1) return 0;
    int jumps = 0, current_end = 0, max_reach = 0;

    for (int i = 0; i < nums.size() - 1; i++) {
      max_reach = std::max(max_reach, i + nums[i]);
      if (i == current_end) {
        jumps++;
        current_end = max_reach;
      }
    }
    return jumps;
  }
};
}// namespace max_jump_two