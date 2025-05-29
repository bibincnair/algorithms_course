#include <vector>

using std::vector;

namespace game_of_life {
class Solution
{
public:
  void gameOfLife(vector<vector<int>> &board)
  {
    // Extend the current state of 0 and 1 with two additional states.
    // -1: live to dead. 2: dead to live.

    // 1. Stage 1: Traverse and map to new states.
    for (size_t row = 0; row < board.size(); row++) {
      for (size_t col = 0; col < board[0].size(); col++) {

        int neighbour_ones = 0;
        if (row > 0 && ((board[row - 1][col] == 1) || (board[row - 1][col] == -1))) { neighbour_ones++; }
        if (col > 0 && ((board[row][col - 1] == 1) || (board[row][col - 1] == -1))) { neighbour_ones++; }
        if (row < board.size() - 1 && ((board[row + 1][col] == 1) || (board[row + 1][col] == -1))) { neighbour_ones++; }
        if (col < board[0].size() - 1 && ((board[row][col + 1] == 1) || (board[row][col + 1] == -1))) {
          neighbour_ones++;
        }
        // Check top-left neighbor
        if (row > 0 && col > 0 && (board[row - 1][col - 1] == 1 || board[row - 1][col - 1] == -1)) { neighbour_ones++; }
        // Check top-right neighbor
        if (row > 0 && col < board[0].size() - 1 && (board[row - 1][col + 1] == 1 || board[row - 1][col + 1] == -1)) {
          neighbour_ones++;
        }
        // Check bottom-left neighbor
        if (row < board.size() - 1 && col > 0 && (board[row + 1][col - 1] == 1 || board[row + 1][col - 1] == -1)) {
          neighbour_ones++;
        }
        // Check bottom-right neighbor
        if (row < board.size() - 1 && col < board[0].size() - 1
            && (board[row + 1][col + 1] == 1 || board[row + 1][col + 1] == -1)) {
          neighbour_ones++;
        }


        if (board[row][col] == 1 && (neighbour_ones < 2 || neighbour_ones > 3)) { board[row][col] = -1; }
        if (board[row][col] == 0 && (neighbour_ones == 3)) { board[row][col] = 2; }
      }
    }
    for (size_t r = 0; r < board.size(); ++r) {
      for (size_t c = 0; c < board[0].size(); ++c) {
        if (board[r][c] == -1) {
          board[r][c] = 0;// Finalize "live to dead"
        } else if (board[r][c] == 2) {
          board[r][c] = 1;// Finalize "dead to live"
        }
      }
    }
  }
};
}// namespace game_of_life