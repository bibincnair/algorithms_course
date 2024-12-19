#include <string>
using std::string;

namespace length_last_word {
class Solution
{
public:
  int lengthOfLastWord(string s)
  {
    int length = 0;
    for (int i = s.length() - 1; i >= 0; i--) {
      if (s[i] == ' ') {
        if (length > 0) { return length; }
      } else {
        length++;
      }
    }
    return length;
  }
};
}// namespace length_last_word