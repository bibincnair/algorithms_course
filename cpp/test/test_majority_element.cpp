#include "algorithms/majority_element.hpp"
#include <catch2/catch_all.hpp>
#include <vector>

using std::vector;

TEST_CASE("Majority element - Test case 1", "[majorityElement]")
{
  vector<int> nums = { 3, 2, 3 };
  majority_element::Solution sol;
  int result = sol.majorityElement(nums);
  REQUIRE(result == 3);
}

TEST_CASE("Majority element - Test case 2", "[majorityElement]")
{
  vector<int> nums = { 2, 2, 1, 1, 1, 2, 2 };
  majority_element::Solution sol;
  int result = sol.majorityElement(nums);
  REQUIRE(result == 2);
}