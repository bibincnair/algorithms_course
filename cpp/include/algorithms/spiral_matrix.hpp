#include <vector>
using std::vector;


namespace spiral_matrix {
class Solution
{
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix)
  {
    vector<int> spiral_vector;
    int top = 0;
    int bottom = matrix.size();
    int left = 0;
    int right = matrix[0].size();


    while (top < bottom && left < right) {

      // 1. Traverse right.
      for (auto ridx = left; ridx < right; ridx++) { spiral_vector.push_back(matrix[top][ridx]); }
      top++;
      // 2. Traverse down.
      if (top < bottom) {
      for (auto didx = top; didx < bottom; didx++) { spiral_vector.push_back(matrix[didx][right - 1]); }
      right--;
      }
      // 3. Traverse left.
      if (top < bottom && left < right) {
        for (auto lidx = right - 1; lidx >= left; lidx--) { spiral_vector.push_back(matrix[bottom - 1][lidx]); }
      }
      bottom--;
      // 4. Traverse up.
      if (top < bottom && left < right) {
        for (auto tidx = bottom - 1; tidx >= top; tidx--) { spiral_vector.push_back(matrix[tidx][left]); }
      }
      left++;
    }
    return spiral_vector;
  }
};
}// namespace spiral_matrix