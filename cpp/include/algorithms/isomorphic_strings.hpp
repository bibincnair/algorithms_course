#include <string>
#include <unordered_map>

using std::string;
using std::unordered_map;

namespace isomorphic_strings {
class Solution
{
public:
  bool isIsomorphic(string s, string t)
  {

    unordered_map<char, char> s_to_t_map;
    unordered_map<char, char> t_to_s_map;

    for (size_t idx = 0; idx < s.length(); idx++) {
      if (s_to_t_map.contains(s[idx])) {
        if (s_to_t_map[s[idx]] != t[idx]) { return false; }
      } else {
        if (t_to_s_map.contains(t[idx])) { return false; }
        s_to_t_map[s[idx]] = t[idx];
        t_to_s_map[t[idx]] = s[idx];
      }
    }
    return true;
  }
};
}// namespace isomorphic_strings