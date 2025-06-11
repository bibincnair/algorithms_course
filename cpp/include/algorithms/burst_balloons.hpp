#include <algorithm>
#include <vector>
using std::vector;

namespace burst_balloons {
class Solution
{
public:
  int findMinArrowShots(vector<vector<int>> &points)
  {
    int count = 1;
    std::ranges::sort(points);
    int current = points[0][1];
    for(size_t i = 1; i < points.size(); i++){
        if(points[i][0] <= current){
            current = std::min(current, points[i][1]);
        }
        else{
            count++;
            current = points[i][1];
        }
    }
    return count;
  }
};
}// namespace burst_balloons