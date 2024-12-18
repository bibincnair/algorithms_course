#include <string>
#include <vector>
using std::string;
using std::vector;

namespace roman_to_int {
class Solution
{
public:
  string intToRoman(int num)
  {
    vector<std::pair<int, string>> value_symbols = { { 1000, "M" },
      { 900, "CM" },
      { 500, "D" },
      { 400, "CD" },
      { 100, "C" },
      { 90, "XC" },
      { 50, "L" },
      { 40, "XL" },
      { 10, "X" },
      { 9, "IX" },
      { 5, "V" },
      { 4, "IV" },
      { 1, "I" } };

    string result;
    result.reserve(15);

    for (const auto &[value, symbol] : value_symbols) {
      while (num >= value) {
        result.append(symbol);
        num -= value;
      }
    }

    return result;
  }
};
}// namespace roman_to_int