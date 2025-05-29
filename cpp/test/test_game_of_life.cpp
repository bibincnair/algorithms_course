#include "algorithms/game_of_life.hpp"
#include <catch2/catch_all.hpp>
#include <vector>


TEST_CASE("game of life test case 1", "[game_of_life]")
{
  game_of_life::Solution sol;
  vector<vector<int>> board = { { 0, 1, 0 }, { 0, 0, 1 }, { 1, 1, 1 }, { 0, 0, 0 } };
  sol.gameOfLife(board);
  vector<vector<int>> expected = { { 0, 0, 0 }, { 1, 0, 1 }, { 0, 1, 1 }, { 0, 1, 0 } };
  REQUIRE(board == expected);
}

TEST_CASE("game of life test case 2", "[game_of_life]")
{
  game_of_life::Solution sol;
  vector<vector<int>> board = { { 1, 1 }, { 1, 0 } };
  sol.gameOfLife(board);
  vector<vector<int>> expected = { { 1, 1 }, { 1, 1 } };
  REQUIRE(board == expected);
}

TEST_CASE("game of life test case 3 (Blinker)", "[game_of_life]")
{
  game_of_life::Solution sol;
  vector<vector<int>> board = { { 0, 1, 0 }, { 0, 1, 0 }, { 0, 1, 0 } };
  sol.gameOfLife(board);
  vector<vector<int>> expected = { { 0, 0, 0 }, { 1, 1, 1 }, { 0, 0, 0 } };
  REQUIRE(board == expected);
}

TEST_CASE("game of life test case 4 (Still life - Block)", "[game_of_life]")
{
  game_of_life::Solution sol;
  vector<vector<int>> board = { { 0, 0, 0, 0 }, { 0, 1, 1, 0 }, { 0, 1, 1, 0 }, { 0, 0, 0, 0 } };
  sol.gameOfLife(board);
  vector<vector<int>> expected = { { 0, 0, 0, 0 }, { 0, 1, 1, 0 }, { 0, 1, 1, 0 }, { 0, 0, 0, 0 } };
  REQUIRE(board == expected);
}

TEST_CASE("game of life test case 5 (All dead)", "[game_of_life]")
{
  game_of_life::Solution sol;
  vector<vector<int>> board = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };
  sol.gameOfLife(board);
  vector<vector<int>> expected = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };
  REQUIRE(board == expected);
}

TEST_CASE("game of life test case 6 (Single live cell dies)", "[game_of_life]")
{
  game_of_life::Solution sol;
  vector<vector<int>> board = { { 0, 0, 0 }, { 0, 1, 0 }, { 0, 0, 0 } };
  sol.gameOfLife(board);
  vector<vector<int>> expected = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 } };
  REQUIRE(board == expected);
}