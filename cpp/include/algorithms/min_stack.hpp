#include <algorithm>
#include <vector>
#include <climits>
using std::vector;
using std::pair;

namespace min_stack {
class MinStack
{
  vector<pair<int, int>> stack;
  int min_element = INT_MAX;

public:
  MinStack() {}

  void push(int val) {
    if(stack.empty()){
      min_element = val;
    }
    else{
      min_element = std::min(min_element, val);
    }
    stack.emplace_back(val, min_element);
  }

  void pop() {
    if(!stack.empty()){
      stack.pop_back();
      min_element = stack.back().second;
    }
    
  }

  int top() {
    return stack.back().first;
  }

  int getMin() {
    return min_element;
  }
};
}// namespace min_stack


/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */