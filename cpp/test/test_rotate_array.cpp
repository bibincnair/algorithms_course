#include <catch2/catch_all.hpp>
#include <vector>
#include "algorithms/rotate_array.hpp"

using std::vector;

TEST_CASE("Rotate array - Test case 1", "[rotate]")
{
  vector<int> nums = { 1, 2, 3, 4, 5, 6, 7 };
  rotate_array::Solution sol;
  sol.rotate(nums, 3);
  REQUIRE(nums == vector<int>{ 5, 6, 7, 1, 2, 3, 4 });
}

TEST_CASE("Rotate array - Test case 2", "[rotate]")
{
  vector<int> nums = { -1, -100, 3, 99 };
  rotate_array::Solution sol;
  sol.rotate(nums, 2);
  REQUIRE(nums == vector<int>{ 3, 99, -1, -100 });
}