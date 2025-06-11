class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) == 1:
            return 1
        char_cache = {}
        substr_len = 0
        start = 0
        for end, c in enumerate(s):
            if c in char_cache.keys():
                char_cache =  {}
                substr_len = max(substr_len, end - start)
                start = end
            char_cache[c] = 1
        
        return substr_len
                