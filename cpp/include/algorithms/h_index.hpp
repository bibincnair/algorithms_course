#include <algorithm>
#include <vector>
using std::vector;

namespace h_index {
class Solution
{
public:
  int hIndex(vector<int> &citations)
  {
    std::sort(citations.begin(), citations.end(), std::greater<int>());
    int h_index = 0;
    for (int i = 0; i < citations.size(); i++) {
      if (citations[i] >= i + 1) { h_index = i + 1; }
    }
    return h_index;
  }
};
}// namespace h_index