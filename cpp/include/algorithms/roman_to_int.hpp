#include <string>
#include <unordered_map>
using std::string;
using std::unordered_map;

namespace roman_to_int {
class Solution
{
  // Symbol       Value
  // I             1
  // V             5
  // X             10
  // L             50
  // C             100
  // D             500
  // M             1000
  unordered_map<char, int>
    mapping = { { 'I', 1 }, { 'V', 5 }, { 'X', 10 }, { 'L', 50 }, { 'C', 100 }, { 'D', 500 }, { 'M', 1000 } };

public:
  int romanToInt(string s)
  {
    int result = 0;
    for (size_t i = 0; i < s.length(); i++) {
      auto current = mapping[s[i]];
      auto next = mapping[s[i + 1]];
      if ((i + 1 < s.length()) && (current < next)) {
        result -= current;
      } else {
        result += current;
      }
    }
    return result;
  }
};
}// namespace roman_to_int