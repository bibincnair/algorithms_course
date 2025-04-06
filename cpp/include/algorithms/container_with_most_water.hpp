#include <algorithm>
#include <vector>
using std::vector;

namespace container_with_water {
class Solution
{
public:
  int maxArea(vector<int> &height)
  {
    if (height.size() < 2) { return 0; }
    int forward = 0;
    int reverse = static_cast<int>(height.size()) - 1;
    auto min_side = std::min(height[forward], height[reverse]);
    int area = min_side*(reverse-forward);
    while (forward < reverse) {
      if (height[forward] < height[reverse]) {
        ++forward;
      } else {
        --reverse;
      }
      min_side = std::min(height[forward], height[reverse]);
      area = std::max(area, min_side*(reverse-forward));
    }
    return area;
  }
};
}// namespace container_with_water