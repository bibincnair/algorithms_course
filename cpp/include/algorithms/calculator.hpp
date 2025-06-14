#include <cctype>
#include <string>
#include <utility>
#include <vector>

using std::string;
using std::vector;
using std::pair;

namespace calculator {
class Solution
{
public:
  int calculate(string s)
  {
    long long result = 0;
    int sign = 1;
    constexpr int BASE = 10;
    vector<pair<long long, int>> stack;
    for (size_t i = 0; i < s.length(); i++) {
        if (std::isdigit(s[i])) {
            long long current = 0;
            while (i < s.length() && std::isdigit(s[i])) {
                current = current * BASE + (s[i] - '0');
                i++;
            }
            result += sign * current;
            i--;
        }
        else if (s[i] == '+') {
            sign = 1;
        }
        else if (s[i] == '-') {
            sign = -1;
        }
        else if (s[i] == '(') {
            stack.emplace_back(result, sign);
            result = 0;
            sign = 1;
        }
        else if (s[i] == ')') {
            auto [prev_result, prev_sign] = stack.back();
            stack.pop_back();
            result = prev_result + prev_sign * result;
        }
        else{
            // Ignore space.
        }
    }
    return static_cast<int>(result);
  }
};
}// namespace calculator