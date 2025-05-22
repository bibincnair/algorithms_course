#include <climits>
#include <string>
#include <vector>
using std::string;
using std::vector;

namespace min_window_substr {
class Solution
{
private:
    // Convert char to index (A-Z: 0-25, a-z: 26-51)
    int charToIndex(char c) {
        if (c >= 'A' && c <= 'Z') {
            return c - 'A';
        } else {
            return c - 'a' + 26;
        }
    }

public:
    string minWindow(string s, string t)
    {
        if (t.length() > s.length()) { return ""; }
        vector<int> target_freq(64, 0);
        string output;
        
        size_t unique_chars = 0;
        for (const char c : t) {
            int idx = charToIndex(c);
            if (target_freq[idx] == 0) {
                unique_chars++;
            }
            target_freq[idx]++;
        }

        size_t min_len = INT_MAX;
        size_t result_start = 0;
        size_t result_end = 0;
        size_t left_idx = 0;
        size_t right_idx = 0;
        size_t window_len = 0;
        vector<int> window_freq(64, 0);

        while (right_idx < s.length()) {
            char curr_char = s[right_idx];
            int curr_idx = charToIndex(curr_char);
            window_freq[curr_idx]++;

            if (target_freq[curr_idx] > 0 && window_freq[curr_idx] == target_freq[curr_idx]) {
                window_len++;
            }

            while (left_idx <= right_idx && window_len == unique_chars) {
                if (right_idx - left_idx + 1 < min_len) {
                    min_len = right_idx - left_idx + 1;
                    result_start = left_idx;
                    result_end = right_idx;
                }

                char rm_char = s[left_idx];
                int rm_idx = charToIndex(rm_char);
                window_freq[rm_idx]--;
                
                if (target_freq[rm_idx] > 0 && window_freq[rm_idx] < target_freq[rm_idx]) {
                    window_len--;
                }
                left_idx++;
            }
            right_idx++;
        }
        
        if (min_len != INT_MAX) {
            output = s.substr(result_start, result_end - result_start + 1);
        }
        return output;
    }
};
}// namespace min_window_substr