#include <vector>
using std::vector;

namespace sell_stock_one {
class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {

    if (prices.empty()) return 0;
    int max_profit = 0;
    int min_price = prices[0];
    for (int i = 1; i < prices.size(); i++) {
      if (prices[i] < min_price) {
        min_price = prices[i];
      } else {
        max_profit = std::max(max_profit, prices[i] - min_price);
      }
    }
    return max_profit;
  }
};
}// namespace sell_stock_one