#include <vector>
using std::vector;

namespace remove_duplicates_second {
class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    if (nums.empty()) return 0;

    int element_count = 1;
    int trace = 1;
    int current_count = 1;
    for (int head = 1; head < nums.size(); head++) {
      if (nums[head] == nums[head - 1]) {
        current_count++;
      } else {
        current_count = 1;
      }
      if (current_count <= 2) {
        nums[trace++] = nums[head];
        element_count++;
      }
    }
    return element_count;
  }
};
}// namespace remove_duplicates_second