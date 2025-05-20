#include <algorithm>
#include <set>
#include <string>
#include <vector>
using std::string;
using std::set;
using std::vector;

namespace longest_substring {
class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    int max_len = 0;
    int start = 0;
    vector<int> prev_seen(256, -1);
    for(int i = 0; i < static_cast<int>(s.length()); i++){

      start = std::max(start, prev_seen[s[i]] + 1);
      prev_seen[s[i]] = i;
      max_len = std::max(max_len, i - start + 1);
    }
    return max_len;
  }
};
}// namespace longest_substring n                     