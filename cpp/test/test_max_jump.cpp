#include <algorithms/max_jump.hpp>
#include <catch2/catch_all.hpp>
#include <vector>

using std::vector;

TEST_CASE("Test max_jump::Solution::canJump", "[max_jump::Solution::canJump]")
{
  max_jump::Solution solution;
  SECTION("Test case 1")
  {
    vector<int> nums = { 2, 3, 1, 1, 4 };
    REQUIRE(solution.canJump(nums) == true);
  }
  SECTION("Test case 2")
  {
    vector<int> nums = { 3, 2, 1, 0, 4 };
    REQUIRE(solution.canJump(nums) == false);
  }
}