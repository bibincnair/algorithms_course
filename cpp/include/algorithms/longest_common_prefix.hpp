#include <string>
#include <vector>
using std::string;
using std::vector;

namespace longest_common_prefix {
class Solution
{
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    if (strs.size() == 1) { return strs[0]; }

    int prefix_len = 0;
    while (true) {
      if (prefix_len >= strs[0].size()) { return strs[0].substr(0, prefix_len); }
      char c = strs[0][prefix_len];
      for (int i = 1; i < strs.size(); i++) {
        if (prefix_len >= strs[i].size() || strs[i][prefix_len] != c) { return strs[0].substr(0, prefix_len); }
      }
      prefix_len++;
    }
  }
};
}// namespace longest_common_prefix