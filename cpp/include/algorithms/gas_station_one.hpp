#include <vector>
using std::vector;

namespace gas_station_one {
class Solution
{
public:
  int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
  {
    if (gas.size() == 0 || cost.size() == 0) { return -1; }

    int total_gas = 0;
    int tank = 0;
    int start = 0;
    for (int i = 0; i < gas.size(); i++) {
      total_gas += gas[i] - cost[i];
      tank += gas[i] - cost[i];
      if(tank < 0) {
        start = i + 1;
        tank = 0;
      }
    }
    return total_gas >= 0 ? start : -1;
  }
};
}// namespace gas_station_one