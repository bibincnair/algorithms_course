#include <algorithm>
#include <catch2/catch_all.hpp>
#include <catch2/catch_test_macros.hpp>
#include "algorithms/3sum.hpp"

#include <algorithm>

void sortTriplets(std::vector<std::vector<int>>& triplets) {
    for (auto& triplet : triplets) {
        std::ranges::sort(triplet);
    }
    std::ranges::sort(triplets);
}

TEST_CASE("ThreeSum Example 1", "[three_sum]") {
    std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
    std::vector<std::vector<int>> expected = {{-1, -1, 2}, {-1, 0, 1}};
    sum::Solution sol;
    auto result = sol.threeSum(nums);
    sortTriplets(result);
    sortTriplets(expected);
    REQUIRE(result == expected);
}

TEST_CASE("ThreeSum Example 2", "[three_sum]") {
    std::vector<int> nums = {0, 1, 1};
    std::vector<std::vector<int>> expected = {};
    sum::Solution sol;
    auto result = sol.threeSum(nums);
    sortTriplets(result);
    sortTriplets(expected);
    REQUIRE(result == expected);
}

TEST_CASE("ThreeSum Example 3", "[three_sum]") {
    std::vector<int> nums = {0, 0, 0};
    std::vector<std::vector<int>> expected = {{0, 0, 0}};
    sum::Solution sol;
    auto result = sol.threeSum(nums);
    sortTriplets(result);
    sortTriplets(expected);
    REQUIRE(result == expected);
}