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
    vector<string> result;
    for (int i = 0; i < static_cast<int>(words.size());) {
      int probe = i;
      int len = 0;
      while (probe < static_cast<int>(words.size()) && len + words[probe].size() <= maxWidth) {
        len += words[probe].size() + 1;
        probe++;
      }
      len--;
      int num_words = probe - i;
      int num_spaces = maxWidth - len;
      string line;
      line.reserve(maxWidth);
      if (num_words == 1) {
        line.append(words[i]);
        line.append(num_spaces, ' ');
      } else if (probe == static_cast<int>(words.size())) {
        line.append(words[i]);
        for (int j = i + 1; j < probe; j++) {
          line.append(" ");
          line.append(words[j]);
        }
      } else {
        int spaces_per_word = num_spaces / (num_words - 1);
        int extra_spaces = num_spaces % (num_words - 1);
        line.append(words[i]);
        for (int j = i + 1; j < probe; j++) {
          line.append(spaces_per_word, ' ');
          if (extra_spaces > 0) {
            line.append(" ");
            extra_spaces--;
          }
          line.append(words[j]);
        }
      }
      result.push_back(line);
      i = probe;
    }
    return result;
  }
};
}// namespace text_justification