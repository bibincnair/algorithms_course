#include <unordered_map>
#include <vector>
using std::vector;
using std::unordered_map;

namespace contains_duplicate_two {
class Solution
{
public:
  bool containsNearbyDuplicate(vector<int> &nums, int k)
  {

    unordered_map<int, int> map_index;
    for (size_t i = 0; i < nums.size(); i++) {
      if (map_index.contains(nums[i])) {
        if ((i - map_index[nums[i]]) <= k) { return true; }
      }
      map_index[nums[i]] = i;
    }
    return false;
  }
};
}// namespace contains_duplicate_two