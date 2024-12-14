#include <catch2/catch_test_macros.hpp>
#include <vector>
#include "algorithms/remove_element.hpp"

TEST_CASE("Remove Element", "test1") {

    std::vector<int> nums = {3, 2, 2, 3};
    remove_element::Solution sol;
    int result = sol.removeElement(nums, 3);
    REQUIRE(result == 2);
    REQUIRE(std::vector<int>(nums.begin(), nums.begin() + result) == std::vector<int>{2, 2});

    nums = {0, 1, 2, 2, 3, 0, 4, 2};
    result = sol.removeElement(nums, 2);
    REQUIRE(result == 5);
    auto result_nums = std::vector<int>(nums.begin(), nums.begin() + result);
    REQUIRE(result_nums == std::vector<int>{0, 1, 4, 0, 3});
}