#include <string>
#include <vector>
using std::vector;
using std::string;

namespace rpn {
class Solution
{
public:
  int evalRPN(vector<string> &tokens)
  {
    vector<int> stack;
    for (auto &tok : tokens) {
      if (tok.size() == 1) {
        int b = stack.back();
        stack.pop_back();
        int a = stack.back();
        stack.pop_back();
        switch (tok[0]) {
        case '+':
          stack.push_back(a + b);
          break;
        case '-':
          stack.push_back(a - b);
          break;
        case '*':
          stack.push_back(a * b);
          break;
        case '/':
          stack.push_back(a / b);
          break;
        }
      } else {
        stack.push_back(std::stoi(tok));
      }
    }
    return stack.back();
  }
};
}// namespace rpn