#include <vector>
#include <algorithm>
using std::vector;

namespace min_sub_array {
class Solution
{
public:
  int minSubArrayLen(int target, vector<int> &nums)
  {
    int min_len = nums.size() + 1;
    // Implementation using sliding window.
    int sum = 0;
    int start = 0;
    for(int end = 0; end < nums.size(); ++end){
        sum += nums[end];
        while(sum >= target){
            min_len = std::min(min_len, end - start + 1);
            sum -= nums[start++];
        }
    }
    if(min_len > nums.size()){
        min_len = 0;
    }
    return min_len;

  }
};
}// namespace min_sub_array
