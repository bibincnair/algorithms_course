#include <algorithms/rain_water.hpp>
#include <catch2/catch_all.hpp>
#include <vector>
using std::vector;

TEST_CASE("Rain water test case", "[rain water]")
{
  SECTION("Rain water test case 1")
  {
    vector<int> height = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    rain_water::Solution solution;
    REQUIRE(solution.trap(height) == 6);
  }

  SECTION("Rain water test case 2")
  {
    vector<int> height = { 4, 2, 0, 3, 2, 5 };
    rain_water::Solution solution;
    REQUIRE(solution.trap(height) == 9);
  }
}