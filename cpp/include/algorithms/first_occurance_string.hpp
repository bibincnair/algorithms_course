#include <string>
using std::string;

namespace first_occurance_string {
class Solution
{
public:
  int strStr(string haystack, string needle)
  {

    int pos = -1;
    if (needle.empty()) return 0;
    if (haystack.empty() || needle.size() > haystack.size()) return -1;
    int start = 0;
    int end = needle.size();
    for (int i = 0; i < static_cast<int>(haystack.size() - needle.size() + 1); i++) {

      int j = 0;
      while (j < static_cast<int>(needle.size()) && haystack[i + j] == needle[j]) { j++; }
      if (j == needle.size()) return i;
    }
    return -1;
  }
};
}// namespace first_occurance_string