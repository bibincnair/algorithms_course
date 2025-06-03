#include <string>
using std::string;
#include <array>
using std::array;

namespace valid_anagram {
  class Solution
  {
  public:
    bool isAnagram(string s, string t)
    {
      array<int, 26> s_hash;
      array<int, 26> t_hash;

      if (s.length() != t.length()) { return false; }
      for (size_t i = 0; i < s.length(); i++) {
        s_hash.at(s[i] - 'a')++;
        t_hash.at(t[i] - 'a')++;
      }

      for (size_t i = 0; i < s_hash.size(); i++) {
        if (s_hash.at(i) == t_hash.at(i)) { continue; }
        {
          return false;
        }
      }
      return true;
    }
  };
}// namespace valid_anagram