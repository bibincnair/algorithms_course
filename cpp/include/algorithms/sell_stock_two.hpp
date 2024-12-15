#include <vector>
using std::vector;

namespace sell_stock_two {

class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {

    if (prices.empty()) return 0;

    int current_profit = 0;
    for (int i = 1; i < prices.size(); i++) {
      if (prices[i] > prices[i - 1]) { current_profit += prices[i] - prices[i - 1]; }
    }
    return current_profit;
  }
};

}// namespace sell_stock_two