#include "algorithms/rotate_image.hpp"
#include <catch2/catch_all.hpp>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("rotate image test case 1", "[rotate_image]")
{
  rotate_image::Solution sol;
  std::vector<std::vector<int>> input = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
  sol.rotate(input);

  std::vector<std::vector<int>> expected = { { 7, 4, 1 }, { 8, 5, 2 }, { 9, 6, 3 } };
  REQUIRE(input == expected);
}

TEST_CASE("rotate image test case 2", "[rotate_image]")
{
  rotate_image::Solution sol;
  std::vector<std::vector<int>> input = { { 5, 1, 9, 11 }, { 2, 4, 8, 10 }, { 13, 3, 6, 7 }, { 15, 14, 12, 16 } };
  sol.rotate(input);

  std::vector<std::vector<int>> expected = { { 15, 13, 2, 5 }, { 14, 3, 4, 1 }, { 12, 6, 8, 9 }, { 16, 7, 10, 11 } };
  REQUIRE(input == expected);
}