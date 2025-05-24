#include <catch2/catch_all.hpp>
#include "algorithms/valid_sudoku.hpp"

TEST_CASE("valid sudoku: test case 1", "[sudoku]"){
    std::vector<std::vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    sudoku::Solution sol;
    REQUIRE(sol.isValidSudoku(board) == true);
}

TEST_CASE("valid sudoku: test case 2 - invalid with duplicate in 3x3 box", "[sudoku]"){
    std::vector<std::vector<char>> board = {
        {'8','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    sudoku::Solution sol;
    REQUIRE(sol.isValidSudoku(board) == false);
}

TEST_CASE("valid sudoku: test case 3 - invalid with duplicate in row", "[sudoku]"){
    std::vector<std::vector<char>> board = {
        {'5','3','5','.','7','.','.','.','.'},  // Duplicate '5' in first row
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    
    sudoku::Solution sol;
    REQUIRE(sol.isValidSudoku(board) == false);
}

TEST_CASE("valid sudoku: test case 4 - invalid with duplicate in column", "[sudoku]"){
    std::vector<std::vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'5','9','8','.','.','.','.','6','.'}, // Duplicate '5' in first column
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    
    sudoku::Solution sol;
    REQUIRE(sol.isValidSudoku(board) == false);
}

TEST_CASE("valid sudoku: test case 5 - empty board", "[sudoku]"){
    std::vector<std::vector<char>> board(9, std::vector<char>(9, '.'));
    
    sudoku::Solution sol;
    REQUIRE(sol.isValidSudoku(board) == true);
}