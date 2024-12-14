#include <vector>
using std::vector;

namespace remove_duplicate_sorted_array {
class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {

    if(nums.empty()) return 0;

    int element_count = 1;
    int trace = 0;
    for(int head = 1; head < nums.size(); head++)
    {
      if(nums[head] != nums[trace])
      {
        nums[++trace] = nums[head];
        element_count++;
      }
    }

    return element_count;
  }
};
}// namespace remove_duplicate_sorted_array