#include <algorithms/gas_station_one.hpp>
#include <catch2/catch_all.hpp>
#include <vector>

using std::vector;

TEST_CASE("Gas Station One")
{
  gas_station_one::Solution solution;
  SECTION("Test 1")
  {
    vector<int> gas = { 1, 2, 3, 4, 5 };
    vector<int> cost = { 3, 4, 5, 1, 2 };
    REQUIRE(solution.canCompleteCircuit(gas, cost) == 3);
  }
  SECTION("Test 2")
  {
    vector<int> gas = { 2, 3, 4 };
    vector<int> cost = { 3, 4, 3 };
    REQUIRE(solution.canCompleteCircuit(gas, cost) == -1);
  }

  SECTION("Test 3")
  {
    vector<int> gas = { 3, 1, 1 };
    vector<int> cost = { 1, 2, 2 };
    REQUIRE(solution.canCompleteCircuit(gas, cost) == 0);
  }
}