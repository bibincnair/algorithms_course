#include <string>
using std::string;

namespace is_subsequence {
class Solution
{
public:
  bool isSubsequence(string s, string t)
  {
    if (s.empty()) { return true; }
    if (t.empty()) { return false; }

    auto iter1 = s.begin();
    auto iter2 = t.begin();
    while (iter1 != s.end() && iter2 != t.end()){
        if(*iter1 == *iter2){
            ++iter1;
        }
        ++iter2;
    }
    return (iter1 == s.end());
  }
};
}// namespace is_subsequence