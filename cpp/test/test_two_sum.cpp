#include <catch2/catch_all.hpp>
#include "algorithms/two_sum.hpp"
#include <vector>
using std::vector;

TEST_CASE("TwoSum: Example 1", "[two_sum]") {
    vector<int> numbers = {2, 7, 11, 15};
    int target = 9;
    two_space::Solution sol;
    REQUIRE(sol.twoSum(numbers, target) == vector<int>{1, 2});
}

TEST_CASE("TwoSum: Example 2", "[two_sum]") {
    vector<int> numbers = {2, 3, 4};
    int target = 6;
    two_space::Solution sol;
    REQUIRE(sol.twoSum(numbers, target) == vector<int>{1, 3});
}

TEST_CASE("TwoSum: Example 3", "[two_sum]") {
    vector<int> numbers = {-1, 0};
    int target = -1;
    two_space::Solution sol;
    REQUIRE(sol.twoSum(numbers, target) == vector<int>{1, 2});
}

TEST_CASE("TwoSum: Example 4", "[two_sum]") {
    vector<int> numbers = {-10,-8,-2,1,2,5,6};
    int target = 0;
    two_space::Solution sol;
    REQUIRE(sol.twoSum(numbers, target) == vector<int>{3, 5});
}

TEST_CASE("TwoSum: Example 5", "[two_sum]") {
    vector<int> numbers = {1, 2};
    int target = 3;
    two_space::Solution sol;
    REQUIRE(sol.twoSum(numbers, target) == vector<int>{1, 2});
}