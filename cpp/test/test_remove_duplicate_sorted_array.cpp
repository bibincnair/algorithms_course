#include "algorithms/remove_duplicate_sorted_array.hpp"
#include <catch2/catch_test_macros.hpp>

#include <vector>
using std::vector;

TEST_CASE("Remove duplicate sorted array - Test case 1", "[removeDuplicates]")
{
  vector<int> nums = { 1, 1, 2 };
  remove_duplicate_sorted_array::Solution sol;
  int result = sol.removeDuplicates(nums);
  REQUIRE(result == 2);
  REQUIRE(vector<int>(nums.begin(), nums.begin() + result) == vector<int>{ 1, 2 });
}


TEST_CASE("Remove duplicate sorted array - Test case 2", "[removeDuplicates]")
{
  vector<int> nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
  remove_duplicate_sorted_array::Solution sol;
  int result = sol.removeDuplicates(nums);
  REQUIRE(result == 5);
  REQUIRE(vector<int>(nums.begin(), nums.begin() + result) == vector<int>{ 0, 1, 2, 3, 4 });
}