#include <catch2/catch_all.hpp>
#include "algorithms/spiral_matrix.hpp"

TEST_CASE("spiral matrix tests", "[spiral_matrix]") {
    spiral_matrix::Solution sol;

    SECTION("Test 1") {
        std::vector<std::vector<int>> matrix{
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        auto result = sol.spiralOrder(matrix);
        REQUIRE(result == std::vector<int>{1,2,3,6,9,8,7,4,5});
    }

    SECTION("Test 2") {
        std::vector<std::vector<int>> matrix{
            {1,  2,  3,  4},
            {5,  6,  7,  8},
            {9, 10, 11, 12}
        };
        auto result = sol.spiralOrder(matrix);
        REQUIRE(result == std::vector<int>{1,2,3,4,8,12,11,10,9,5,6,7});
    }

    SECTION("Test 3 – 2x2 matrix") {
        std::vector<std::vector<int>> matrix{
            {1, 2},
            {3, 4}
        };
        auto result = sol.spiralOrder(matrix);
        REQUIRE(result == std::vector<int>{1,2,4,3});
    }
}
