#include <vector>
using std::vector;

namespace remove_element {
class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {

    int hi = nums.size() - 1;
    int lo = 0;
    if (nums.size() == 0) return 0;

    while (hi > lo) {
      if (nums[hi] == val) {
        hi--;
      } else if (nums[lo] == val) {
        nums[lo] = nums[hi];
        nums[hi] = val;
        hi--;
        lo++;
      } else {
        lo++;
      }
    }
    return nums[hi] == val ? hi : hi + 1;
  }
};
}// namespace remove_element