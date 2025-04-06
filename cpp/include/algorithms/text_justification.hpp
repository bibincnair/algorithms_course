#include <string>
#include <vector>

using std::string;
using std::vector;

namespace text_justification {
class Solution
{
public:
  vector<string> fullJustify(vector<string> &words, int maxWidth)
  {
    vector<string> words_justified;
    int i = 0;
    while (i < words.size()) {
      int linestart = i;
      int current_length = words[i].length();
      i++;

      while (i < words.size() && current_length + 1 + words[i].length() <= maxWidth) {
        current_length += 1 + words[i].length();
        i++;
      }

      int words_in_line = i - linestart;
      int total_word_length = current_length - (words_in_line - 1);
      int total_spaces = maxWidth - total_word_length;
      int spaces_per_gap = (words_in_line > 1) ? total_spaces / (words_in_line - 1) : 0;
      int extra_spaces = (words_in_line > 1) ? total_spaces % (words_in_line - 1) : 0;


      // Start creating the line string.
      string line;
      // Case 1: Last line or single word line.
      if (i == words.size() || words_in_line == 1) {
        line = words[linestart];
        for (int k = linestart + 1; k < i; k++) { line += " " + words[k]; }
        if (maxWidth - line.length() > 0) { line += string(maxWidth - line.length(), ' '); }
      }
      // Case 2: Rest of the lines.
      else {

        line = words[linestart];
        for (int k = linestart + 1; k < i; k++) {
          int space_to_add = spaces_per_gap + (extra_spaces > 0 ? 1 : 0);
          extra_spaces--;
          line += string(space_to_add, ' ') + words[k];
        }
      }
      words_justified.push_back(line);
    }
    return words_justified;
  }
};
}// namespace text_justification