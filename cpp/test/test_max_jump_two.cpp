#include <algorithms/max_jump_two.hpp>
#include <catch2/catch_all.hpp>
#include <vector>

using std::vector;

TEST_CASE("MAX JUMP TWO", "[max jump]")
{
  max_jump_two::Solution solution;

  SECTION("Test case 1")
  {
    // Input: nums = [2,3,1,1,4]
    // Output: 2
    vector<int> nums = { 2, 3, 1, 1, 4 };
    REQUIRE(solution.jump(nums) == 2);
  }

  SECTION("Test case 2")
  {
    // Input: nums = [2,3,0,1,4]
    // Output: 2
    vector<int> nums = { 2, 3, 0, 1, 4 };
    REQUIRE(solution.jump(nums) == 2);
  }

  SECTION("Test case 3")
  {
    // Input: nums = [1,2,1,1,1]
    // Output: 3
    vector<int> nums = { 1, 2, 1, 1, 1 };
    REQUIRE(solution.jump(nums) == 3);
  }

  SECTION("Test case 4")
  {
    // Input: nums = [0]
    // Output: 0
    vector<int> nums = { 0 };
    REQUIRE(solution.jump(nums) == 0);
  }
}