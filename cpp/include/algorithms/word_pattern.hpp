#include <sstream>
#include <string>
#include <unordered_map>
#include <vector>
using std::string;
using std::unordered_map;
using std::stringstream;
using std::vector;

namespace word_pattern {
class Solution
{
public:
  bool wordPattern(string pattern, string s)
  {

    unordered_map<string, char> s_to_pattern;
    unordered_map<char, string> pattern_to_s;
    vector<string> s_words;

    stringstream ss(s);
    string substr;
    while (ss >> substr) { s_words.push_back(substr); }

    for (size_t i = 0; i < s_words.size(); i++) {
      if (pattern_to_s.contains(pattern[i])) {
        if (pattern_to_s[pattern[i]] != s_words[i]) { return false; }
      } else {
        if (s_to_pattern.contains(s_words[i])) { return false; }
        s_to_pattern[s_words[i]] = pattern[i];
        pattern_to_s[pattern[i]] = s_words[i];
      }
    }
    return true;
  }
};
}// namespace word_pattern