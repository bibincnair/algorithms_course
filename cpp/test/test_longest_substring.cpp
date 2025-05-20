#include "algorithms/longest_substring.hpp"
#include <catch2/catch_all.hpp>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("longest substring test case 1", "[longest_substring]") {
    std::string input_string("abcabcbb");
    longest_substring::Solution sol;
    REQUIRE(sol.lengthOfLongestSubstring(input_string) == 3);
}

TEST_CASE("longest substring test case 2", "[longest_substring]") {
    std::string input_string("bbbbb");
    longest_substring::Solution sol;
    REQUIRE(sol.lengthOfLongestSubstring(input_string) == 1);
}

TEST_CASE("longest substring test case 3", "[longest_substring]") {
    std::string input_string("pwwkew");
    longest_substring::Solution sol;
    REQUIRE(sol.lengthOfLongestSubstring(input_string) == 3);
}

TEST_CASE("longest substring test case 4", "[longest_substring]") {
    std::string input_string("");
    longest_substring::Solution sol;
    REQUIRE(sol.lengthOfLongestSubstring(input_string) == 0);
}

TEST_CASE("longest substring test case 5", "[longest_substring]") {
    std::string input_string("dvdf");
    longest_substring::Solution sol;
    REQUIRE(sol.lengthOfLongestSubstring(input_string) == 3);
}