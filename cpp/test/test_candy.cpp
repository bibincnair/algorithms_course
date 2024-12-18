#include "algorithms/candy.hpp"
#include <catch2/catch_all.hpp>
#include <vector>

using std::vector;

TEST_CASE("Candy", "[candy]")
{
  candy::Solution solution;
  SECTION("Test 1")
  {
    vector<int> ratings = { 1, 0, 2 };
    REQUIRE(solution.candy(ratings) == 5);
  }
  SECTION("Test 2")
  {
    vector<int> ratings = { 1, 2, 2 };
    REQUIRE(solution.candy(ratings) == 4);
  }
  SECTION("Test 3")
  {
    vector<int> ratings = { 1, 2, 3, 4, 5 };
    REQUIRE(solution.candy(ratings) == 15);
  }
  SECTION("Test 4")
  {
    vector<int> ratings = { 5, 4, 3, 2, 1 };
    REQUIRE(solution.candy(ratings) == 15);
  }
  SECTION("Test 5")
  {
    vector<int> ratings = { 1, 3, 2, 2, 1 };
    REQUIRE(solution.candy(ratings) == 7);
  }
}
