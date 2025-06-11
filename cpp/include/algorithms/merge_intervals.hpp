#include <algorithm>
#include <vector>
using std::vector;

namespace merge_intervals {
class Solution
{
public:
  vector<vector<int>> merge(vector<vector<int>> &intervals) {
    
    if(intervals.empty()){
        return vector<vector<int>>{{}};
    }
    std::ranges::sort(intervals);
    auto output = vector<vector<int>>{intervals[0]};
    for(size_t i = 1; i < intervals.size(); i++){
        auto & prev_interval = output.back();
        auto & current = intervals[i];
        if(current[0] < prev_interval[1]){
            prev_interval[1] = std::max(prev_interval[1], current[1]);
        }
        else{
            output.push_back(current);
        }
    }
    return output;
  }
};
}// namespace merge_intervals