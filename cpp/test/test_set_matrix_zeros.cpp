#include "algorithms/set_matrix_zeros.hpp"
#include <catch2/catch_all.hpp>
#include <vector>

TEST_CASE("set matrix zero test case 1", "[set_matrix_zeros]")
{
  set_matrix_zeros::Solution sol;
  std::vector<std::vector<int>> matrix = { { 1, 1, 1 }, { 1, 0, 1 }, { 1, 1, 1 } };
  std::vector<std::vector<int>> expected = { { 1, 0, 1 }, { 0, 0, 0 }, { 1, 0, 1 } };
  sol.setZeroes(matrix);
  REQUIRE(matrix == expected);
}

TEST_CASE("set matrix zero test case 2", "[set_matrix_zeros]")
{
  set_matrix_zeros::Solution sol;
  std::vector<std::vector<int>> matrix = { { 0, 1, 2, 0 }, { 3, 4, 5, 2 }, { 1, 3, 1, 5 } };
  std::vector<std::vector<int>> expected = { { 0, 0, 0, 0 }, { 0, 4, 5, 0 }, { 0, 3, 1, 0 } };
  sol.setZeroes(matrix);
  REQUIRE(matrix == expected);
}