#include <string>
using std::string;

namespace reverse_word_in_string {
class Solution
{
public:
  string reverseWords(string s)
  {

    if (s.length() == 1) return s;
    int current_index = s.size() - 1;
    while (current_index >= 0 && s[current_index] == ' ') { current_index--; }

    string output;
    output.reserve(s.size());

    for (int i = current_index; i >= 0; i--) {
      if (s[i] == ' ') {
        if (i == current_index) {
          current_index = i - 1;
        } else {
          output.append(s, i + 1, current_index - i);
          output.push_back(' ');
          current_index = i - 1;
        }
      }
    }
    if (current_index >= 0) { output.append(s, 0, current_index + 1); }
    if (!output.empty() && output.back() == ' ') { output.pop_back(); }
    return output;
  }
};
}// namespace reverse_word_in_string