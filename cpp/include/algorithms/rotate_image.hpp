#include <algorithm>
#include <vector>
#include <algorithm>
using std::vector;

namespace rotate_image {
class Solution
{
public:
  void rotate(vector<vector<int>> &matrix)
  {

    size_t num_rows = matrix.size();
    size_t num_cols = matrix[0].size();

    // 1. Transpose matrix.
    for (size_t i = 0; i < num_rows; i++) {
      for (size_t j = 0; j < num_cols; j++) {
        if(i == j){
          continue;
        }
        if(i < j){
          std::swap(matrix[i][j], matrix[j][i]);
        }

      }
    }
    // 2. Reverse each row.
    for(auto& row: matrix){
      std::ranges::reverse(row);
    }
  }
};
}// namespace rotate_image
