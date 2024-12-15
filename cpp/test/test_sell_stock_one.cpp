#include <catch2/catch_all.hpp>
#include <algorithms/sell_stock_one.hpp>
#include <vector> 
using std::vector;


TEST_CASE("Test sell_stock_one", "[sell_stock_one]")
{
  sell_stock_one::Solution s;
  SECTION("Test case 1")
  {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    REQUIRE(s.maxProfit(prices) == 5);
  }
  SECTION("Test case 2")
  {
    vector<int> prices = {7, 6, 4, 3, 1};
    REQUIRE(s.maxProfit(prices) == 0);
  }
  SECTION("Test case 3")
  {
    vector<int> prices = {1, 2, 3, 4, 5};
    REQUIRE(s.maxProfit(prices) == 4);
  }
  SECTION("Test case 4")
  {
    vector<int> prices = {1, 2};
    REQUIRE(s.maxProfit(prices) == 1);
  }
  SECTION("Test case 5")
  {
    vector<int> prices = {2, 1};
    REQUIRE(s.maxProfit(prices) == 0);
  }
  SECTION("Test case 6")
  {
    vector<int> prices = {1};
    REQUIRE(s.maxProfit(prices) == 0);
  }
  SECTION("Test case 7")
  {
    vector<int> prices = {};
    REQUIRE(s.maxProfit(prices) == 0);
  }
}