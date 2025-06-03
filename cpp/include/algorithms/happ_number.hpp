#include <unordered_set>
using std::unordered_set;

namespace happy_number {
class Solution
{
public:
  bool isHappy(int n)
  {
    unordered_set<int> seen;
    while (n != 1) {
      // cycle detected?
      if (!seen.insert(n).second)
        return false;

      int sum = 0;
      // sum the squares of all digits
      while (n > 0) {
        int d = n % 10;
        sum += d * d;
        n /= 10;
      }
      n = sum;
    }
    return true;
  }
};
}// namespace happy_number