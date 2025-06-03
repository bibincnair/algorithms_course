#include <algorithm>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>

using std::vector;
using std::string;

namespace group_anagram {

class Solution
{
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs)
  {
    std::unordered_map<string, vector<string>> str_hash;
    for (const string &s : strs) {
      string sorted_s = s;
      std::ranges::sort(sorted_s);
      str_hash[sorted_s].push_back(s);
    }

    vector<vector<string>> output;
    output.reserve(str_hash.size());
    for (const auto &vec : str_hash) { output.push_back(std::move(vec.second)); }
    return output;
  }
};
}// namespace group_anagram