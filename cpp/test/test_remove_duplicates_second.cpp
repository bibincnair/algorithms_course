#include "algorithms/remove_duplicates_second.hpp"
#include <catch2/catch_all.hpp>
#include <vector>

using std::vector;


TEST_CASE("Remove duplicates second - Test case 1", "[removeDuplicatesSecond]")
{
  vector<int> nums = { 1, 1, 2 };
  remove_duplicates_second::Solution sol;
  int result = sol.removeDuplicates(nums);
  REQUIRE(result == 3);
  REQUIRE(vector<int>(nums.begin(), nums.begin() + result) == vector<int>{ 1, 1, 2 });
}

TEST_CASE("Remove duplicates second - Test case 2", "[removeDuplicatesSecond]")
{
  vector<int> nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
  remove_duplicates_second::Solution sol;
  int result = sol.removeDuplicates(nums);
  REQUIRE(result == 9);
  REQUIRE(vector<int>(nums.begin(), nums.begin() + result) == vector<int>{ 0, 0, 1, 1, 2, 2, 3, 3, 4 });
}

TEST_CASE("Remove duplicates second - Test case 3", "[removeDuplicatesSecond]")
{
  vector<int> nums = { 1, 1, 1, 2, 2, 3 };
  remove_duplicates_second::Solution sol;
  int result = sol.removeDuplicates(nums);
  REQUIRE(result == 5);
  REQUIRE(vector<int>(nums.begin(), nums.begin() + result) == vector<int>{ 1, 1, 2, 2, 3 });
}