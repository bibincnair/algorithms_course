#include <vector>
#include <catch2/catch_all.hpp>
#include "algorithms/container_with_most_water.hpp"
using std::vector;


TEST_CASE("container with water : Test 1", "[container_with_water]"){
    container_with_water::Solution sol;
    std::vector<int> input = {1,8,6,2,5,4,8,3,7};
    auto output = sol.maxArea(input);
    REQUIRE(output == 49);
}

TEST_CASE("container with water : Test 2", "[container_with_water]"){
    container_with_water::Solution sol;
    std::vector<int> input = {1, 1};
    auto output = sol.maxArea(input);
    REQUIRE(output == 1);
}

TEST_CASE("container with water : Test 3", "[container_with_water]"){
    container_with_water::Solution sol;
    std::vector<int> input = {4,3,2,1,4};
    auto output = sol.maxArea(input);
    REQUIRE(output == 16);
}

TEST_CASE("container with water : Test 4", "[container_with_water]"){
    container_with_water::Solution sol;
    std::vector<int> input = {1,2,1};
    auto output = sol.maxArea(input);
    REQUIRE(output == 2);
}

TEST_CASE("container with water : Test 5", "[container_with_water]"){
    container_with_water::Solution sol;
    std::vector<int> input = {0,0,0,0,0};
    auto output = sol.maxArea(input);
    REQUIRE(output == 0);
}

TEST_CASE("container with water : Test 6", "[container_with_water]"){
    container_with_water::Solution sol;
    std::vector<int> input = {10000, 1, 10000};
    auto output = sol.maxArea(input);
    REQUIRE(output == 10000*2);
}

TEST_CASE("container with water : Test 7", "[container_with_water]"){
    container_with_water::Solution sol;
    std::vector<int> input = {1, 2, 4, 3};
    auto output = sol.maxArea(input);
    REQUIRE(output == 4);
}