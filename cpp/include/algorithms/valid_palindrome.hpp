#include <cctype>
#include <ratio>
#include <string>

using std::string;

namespace valid_palindrome {
class Solution
{
public:
  static bool isPalindrome(string input_str)
  {
    bool status = true;
    if (input_str.length() == 1) {return status;}

    auto fwd_iter = input_str.begin();
    auto rev_iter = input_str.rbegin();

    while (fwd_iter < rev_iter.base()) {
      while (fwd_iter < rev_iter.base() && !std::isalnum(*fwd_iter)) { ++fwd_iter; }
      while (rev_iter.base() > fwd_iter && !std::isalnum(*rev_iter)) { ++rev_iter; }
      if(fwd_iter >= rev_iter.base()){
        break;
      }
 
      if (std::tolower(*fwd_iter) != std::tolower(*rev_iter)) {
        return false;
      }
      ++fwd_iter;
      ++rev_iter;
    }
    return status;
  }
};

}// namespace valid_palindrome