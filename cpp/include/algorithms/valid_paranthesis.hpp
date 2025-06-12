#include <stack>
#include <string>
#include <unordered_map>

using std::stack;
using std::string;
using std::unordered_map;

namespace valid_paranthesis {
class Solution
{
public:
  bool isValid(string s)
  {
    unordered_map<char, char> bracket_map = { { ')', '(' }, { ']', '[' }, { '}', '{' } };
    stack<char> bracket_stack;
    for (char c : s) {
      if (bracket_map.contains(c)) {
        if (bracket_map[c] != bracket_stack.top() || bracket_stack.empty()) {
          return false;
        } else {
          bracket_stack.pop();
        }
      } else {
        bracket_stack.push(c);
      }
    }
    return bracket_stack.empty();
  }
};
}// namespace valid_paranthesis