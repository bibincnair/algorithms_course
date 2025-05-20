import pytest
from pyalgos.longest_substring import Solution


def test_longest_substring_1():
    input = "abcabcbb"
    output = 3
    sol = Solution()
    result = sol.lengthOfLongestSubstring(input)
    assert result == output


def test_longest_substring_2():
    input = "bbbbb"
    output = 1
    sol = Solution()
    result = sol.lengthOfLongestSubstring(input)
    assert result == output


def test_longest_substring_3():
    input = "pwwkew"
    output = 3
    sol = Solution()
    result = sol.lengthOfLongestSubstring(input)
    assert result == output

def test_longest_substring_4():
    input = " "
    output = 1
    sol = Solution()
    result = sol.lengthOfLongestSubstring(input)
    assert result == output