#include <memory>
#include <string>
#include <vector>

using std::string;
using std::vector;

namespace summary_ranges {
class Solution
{
public:
  vector<string> summaryRanges(vector<int> &nums)
  {
    if (nums.empty()) { return vector<string>{}; }
    vector<string> output;
    size_t begin = 0;
    for (size_t idx = 0; idx < nums.size(); idx++) {

        if((idx == (nums.size() - 1)) || ((nums[idx+1] - nums[idx]) != 1)){
            if(begin == idx){
                output.push_back(std::to_string(nums[begin]));
            }
            else{
                output.push_back(std::to_string(nums[begin]) + "->" + std::to_string(nums[idx]));
            }
            begin = idx + 1;
        }
        
    }
    return output;
  }
};
}// namespace summary_ranges