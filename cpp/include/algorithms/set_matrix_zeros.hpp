#include <vector>
using std::vector;
 
namespace set_matrix_zeros {
class Solution
{
public:
  void setZeroes(vector<vector<int>> &matrix) {
    
    // 1. Look for zeros on first row and first column
    bool zero_in_first_col = false;
    bool zero_in_first_row = false;
    
    for(const auto& entry : matrix[0]){
      if(entry == 0){
        zero_in_first_row = true;
        break;
      } 
    }
    for(const auto & entry : matrix){
      if(entry[0] == 0){
        zero_in_first_col = true;
        break;
      }
    }

    // 2. Iterate and mark rest of entries.
    for(size_t row = 1; row < matrix.size(); row++){
      for(size_t col = 1; col < matrix[0].size(); col++){
        if(matrix[row][col] == 0){
          matrix[0][col] = 0;
          matrix[row][0] = 0;
        }
      }
    }

    // 3. Set marked columns to 0
    for(size_t cidx = 1; cidx < matrix[0].size(); cidx++){
      for(size_t ridx = 1; ridx < matrix.size(); ridx++){
        if(matrix[0][cidx] == 0 || matrix[ridx][0] == 0){
          matrix[ridx][cidx] = 0;
        }
      }
    }
    // 4. Check and mark 1st row and columns 0;
    if(zero_in_first_col){
      for(auto &entry : matrix){
        entry[0] = 0;
      }
    }
    if(zero_in_first_row){
      for(auto &entry : matrix[0]){
        entry = 0;
      }
    }
  }
};
}// namespace set_matrix_zeros