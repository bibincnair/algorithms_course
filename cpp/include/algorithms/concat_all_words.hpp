#include <string>
#include <unordered_map>
#include <vector>

using std::vector;
using std::string;
using std::unordered_map;

namespace concat_all_substr {
class Solution
{
public:
  vector<int> findSubstring(string s, vector<string> &words)
  {
    vector<int> output;
    unordered_map<string, int> words_freq;
    for (const auto &word : words) { words_freq[word] += 1; }
    auto word_len = words[0].length();
    for (size_t i = 0; i < word_len; i++) {
      unordered_map<string, int> current_window_freq;
      int words_in_window_count = 0;
      size_t window_left_idx = i;
      for (size_t window_right_idx = i; window_right_idx + word_len <= s.length(); window_right_idx += word_len) {
        auto curr_substr = s.substr(window_right_idx, word_len);
        if (words_freq.contains(curr_substr)) {
          current_window_freq[curr_substr]++;
          words_in_window_count++;

          while (current_window_freq[curr_substr] > words_freq[curr_substr]) {
            auto word_to_remove = s.substr(window_left_idx, word_len);
            current_window_freq[word_to_remove]--;
            words_in_window_count--;
            window_left_idx += word_len;
          }

          if (words_in_window_count == words.size()) {
            output.push_back(window_left_idx);
            string word_to_remove = s.substr(window_left_idx, word_len);
            current_window_freq[word_to_remove]--;
            words_in_window_count--;
            window_left_idx += word_len;
          }
        } else {
          // current_word is not in words_freq, so reset the window
          current_window_freq.clear();
          words_in_window_count = 0;
          window_left_idx = window_right_idx + word_len;// Start new window after this invalid word
        }
      }
    }
    return output;
  }
};
}// namespace concat_all_substr