#include <catch2/catch_all.hpp>
#include "algorithms/min_size_subarray.hpp"

TEST_CASE("Minimum subarray test case 1", "[min_sub_array]"){

    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    min_sub_array::Solution sol;
    auto result = sol.minSubArrayLen(target, nums);
    REQUIRE(result == 2);
    
}

TEST_CASE("Minimum subarray test case 2", "[min_sub_array]"){
    vector<int> nums = {1, 4, 4};
    int target = 4;
    min_sub_array::Solution sol;
    auto result = sol.minSubArrayLen(target, nums);
    REQUIRE(result == 1);
    
}

TEST_CASE("Minimum subarray test case 3", "[min_sub_array]"){
    vector<int> nums = {1,1,1,1,1,1,1,1};
    int target = 11;
    min_sub_array::Solution sol;
    auto result = sol.minSubArrayLen(target, nums);
    REQUIRE(result == 0);
}

TEST_CASE("Minimum subarray test case 4", "[min_sub_array]"){
    vector<int> nums = {1,2,3,4,5};
    int target = 11;
    min_sub_array::Solution sol;
    auto result = sol.minSubArrayLen(target, nums);
    REQUIRE(result == 3);
}