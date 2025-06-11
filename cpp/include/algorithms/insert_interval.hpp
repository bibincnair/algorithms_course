#include <algorithm>
#include <vector>
using std::vector;

namespace insert_interval {
class Solution
{
public:
  vector<vector<int>> insert(vector<vector<int>> &intervals, vector<int> &newInterval)
  {

    vector<vector<int>> output;
    output.reserve(intervals.size() + 1);

    size_t index = 0;
    // 1. Phase 1: interval before new intervals.
    while (index < intervals.size() && intervals[index][1] < newInterval[0]) {
      output.emplace_back(intervals[index]);
      index++;
    }
    // 2. Phase 2: interval to be merged.
    while (index < intervals.size() && intervals[index][0] <= newInterval[1]) {
      newInterval[0] = std::min(newInterval[0], intervals[index][0]);
      newInterval[1] = std::max(newInterval[1], intervals[index][1]);
      index++;
    }
    output.emplace_back(newInterval);
    // 3. Phase 3: interval after newinterval.
    while (index < intervals.size()) {
      output.emplace_back(intervals[index]);
      index++;
    }
    return output;
  }
};
}// namespace insert_interval