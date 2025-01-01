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
        // Use a two-step approach for middle rows
        int step1 = 2 * (numRows - rowid - 1);
        int step2 = 2 * rowid;
        bool toggle = true;

        for (int i = rowid; i < static_cast<int>(s.size());) {
          output.push_back(s[i]);
          // Alternate between step1 and step2
          i += toggle ? step1 : step2;
          // If step size is zero (can happen if rowid is 0 or numRows - 1, but we are in else),
          // just break to avoid infinite loop
          if ((toggle && step1 == 0) || (!toggle && step2 == 0)) break;
          toggle = !toggle;
        }
      }
      rowid++;
    }
    return output;
  }
};
}// namespace longest_common_prefix