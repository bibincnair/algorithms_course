#include <string>
#include <vector>
using std::string;
using std::vector;

namespace longest_common_prefix {
class Solution
{
  // PAYPALISHIRING: 0 1 2 3  4 5 6 7 8 9  10 11 12 13
  // PAHNAPLSIIGYIR: 0 4 8 12 1 3 5 7 9 11 13 2  6  10
  // 4 -- 2 -- 4
public:
  string convert(string s, int numRows)
  {

    if (numRows == 1) return s;
    int traversal_len = 2 * numRows - 2;
    string output;
    output.reserve(s.size());
    int rowid = 0;
    while (rowid < numRows) {
      if (rowid == 0 || rowid == numRows - 1) {
        traversal_len = 2 * numRows - 2;
        for (int i = rowid; i < s.size(); i += traversal_len) { output.push_back(s[i]); }
      } else {
        traversal_len = (numRows - rowid - 1) * 2 - 2;
        for (int i = rowid; i < s.size(); i += traversal_len) {
          output.push_back(s[i]);
          if (i + traversal_len < s.size()) { output.push_back(s[i + traversal_len]); }
        }
      }
        rowid++;
    }
    return output;
  }
};
}// namespace longest_common_prefix