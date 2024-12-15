#include <vector>
using std::vector;

namespace max_jump {
class Solution
{
public:
  bool canJump(vector<int> &nums)
  {

    if (nums.empty()) return false;
    if (nums.size() == 1) return true;

    int max_jump = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (i > max_jump) return false;
      if (i + nums[i] > max_jump) max_jump = i + nums[i];
    }
    return true;
  }
};
}// namespace max_jump