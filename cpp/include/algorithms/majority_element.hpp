#include <vector>
using std::vector;

namespace majority_element {
class Solution
{
public:
  static int majorityElement(vector<int> &nums)
  {
    if (nums.empty()) return 0;

    int count = 0;
    int candidate = 0;

    for (auto num : nums) {
      if (count == 0) { candidate = num; }
      count += (num == candidate) ? 1 : -1;
    }

    return candidate;
  }
};
}// namespace majority_element