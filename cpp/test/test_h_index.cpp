#include "algorithms/h_index.hpp"
#include <catch2/catch_all.hpp>
#include <vector>
using std::vector;

TEST_CASE("H Index", "test1")
{

  SECTION("Test 1")
  {
    vector<int> citations = { 3, 0, 6, 1, 5 };
    h_index::Solution sol;
    REQUIRE(sol.hIndex(citations) == 3);
  }

  SECTION("Test 2")
  {
    vector<int> citations = { 1, 3, 1 };
    h_index::Solution sol;
    REQUIRE(sol.hIndex(citations) == 1);
  }
}
