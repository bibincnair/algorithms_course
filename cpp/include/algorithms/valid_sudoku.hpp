#include <array>
#include <vector>
using std::vector;
using std::array;

namespace sudoku {
class Solution
{
public:
  bool isValidSudoku(vector<vector<char>> &board)
  {
    constexpr size_t BOARD_SIZE = 9;
    array<array<bool, BOARD_SIZE + 1>, BOARD_SIZE> rows_flag{};
    array<array<bool, BOARD_SIZE + 1>, BOARD_SIZE> cols_flag{};
    array<array<bool, BOARD_SIZE + 1>, BOARD_SIZE> boxes_flag{};

    auto box_index = [&](size_t row, size_t col) -> size_t { return ((row / 3) * 3) + (col / 3); };
    for (size_t row = 0; row < BOARD_SIZE; row++) {
      for (size_t col = 0; col < BOARD_SIZE; col++) {
        const size_t value = static_cast<size_t>(board[row][col]) -  '0';
        if (board[row][col] == '.') { continue; }

        if(rows_flag[row][value]){
            return false;
        }
        if(cols_flag[col][value]){
            return false;
        }
        auto box_id = box_index(row, col);
        if(boxes_flag[box_id][value]){
            return false;
        }

        rows_flag[row][value] = true;
        cols_flag[col][value] = true;
        boxes_flag[box_id][value] = true;
      }
    }
    return true;
  }
};
}// namespace sudoku