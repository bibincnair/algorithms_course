#include <vector>
using std::vector;

namespace rain_water {
class Solution
{
public:
  int trap(vector<int> &height)
  {
    if (height.empty()) return 0;
    int n = height.size();
    vector<int> left_max(n), right_max(n);
    left_max[0] = height[0];
    right_max[n - 1] = height[n - 1];

    for (int i = 1; i < n; i++) { 
        left_max[i] = std::max(left_max[i - 1], height[i]); 
        }
    for (int i = n - 2; i >= 0; i--) { 
        right_max[i] = std::max(right_max[i + 1], height[i]);
        }
    int water = 0;
    for (int i = 0; i < n; i++) { 
        water += std::min(left_max[i], right_max[i]) - height[i]; 
        }
    return water;
  }
};
}// namespace rain_water
