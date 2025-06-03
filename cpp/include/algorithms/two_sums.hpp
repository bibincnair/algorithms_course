#include <vector>
#include <unordered_map>
using std::vector;
using std::unordered_map;

namespace two_sum {
class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target) {

    unordered_map<int, int> map_index;
    for(int idx = 0; idx < nums.size(); idx++){
        int residual = target - nums[idx];
        if(map_index.contains(residual)){
            return vector<int>{idx, map_index[residual]};
        }
        else{
            map_index[nums[idx]] = idx;
        }
    }
  }
};
}// namespace two_sum