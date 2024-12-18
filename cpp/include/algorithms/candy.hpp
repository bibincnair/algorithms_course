#include <vector>
using std::vector;

namespace candy {
class Solution
{
public:
  int candy(vector<int> &ratings)
  {

    if (ratings.empty()) { return 0; }
    vector<int> candies(ratings.size(), 1);
    int total_candies = 0;

    for (int i = 1; i < ratings.size(); i++) {
      if (ratings[i] > ratings[i - 1]) { candies[i] = candies[i - 1] + 1; }
    }
    for (int i = ratings.size() - 2; i >= 0; i--) {
      if (ratings[i] > ratings[i + 1]) { candies[i] = std::max(candies[i], candies[i + 1] + 1); }
    }

    for (int i = 0; i < candies.size(); i++) { total_candies += candies[i]; }

    return total_candies;
  }
};
}// namespace candy