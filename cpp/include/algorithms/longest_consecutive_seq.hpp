#include <algorithm>
#include <unordered_set>
#include <vector>
using std::vector;
using std::unordered_set;

namespace longest_consecutive_seq {
class Solution
{
public:
  int longestConsecutive(vector<int> &nums) {

    unordered_set<int> nums_set;
    for(const auto& num: nums){
        nums_set.insert(num);
    }

    int longest_seq = 0;
    for(int num: nums_set){
        if(!nums_set.contains(num-1)){
            int current = num; 
            int current_seq = 1;
            while(nums_set.contains(current + 1)){
                ++current;
                ++current_seq;
            }
            longest_seq = std::max(longest_seq, current_seq);
        }
    }
    return longest_seq;
  }
};
}// namespace longest_consecutive_seq