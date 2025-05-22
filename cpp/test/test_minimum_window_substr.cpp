#include "algorithms/minimum_window_substr.hpp"
#include <catch2/catch_all.hpp>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("minimum window substring test case 1", "[min_window_substr]")
{
    min_window_substr::Solution sol;
    std::string input_s = "ADOBECODEBANC";
    std::string input_t = "ABC";
    std::string expected = "BANC";
    auto output = sol.minWindow(input_s, input_t);
    REQUIRE(output == expected);
}

TEST_CASE("minimum window substring test case 2", "[min_window_substr]")
{
    min_window_substr::Solution sol;
    std::string input_s = "a";
    std::string input_t = "a";
    std::string expected = "a";
    auto output = sol.minWindow(input_s, input_t);
    REQUIRE(output == expected);
}

TEST_CASE("minimum window substring test case 3", "[min_window_substr]")
{
    min_window_substr::Solution sol;
    std::string input_s = "a";
    std::string input_t = "aa";
    std::string expected = "";
    auto output = sol.minWindow(input_s, input_t);
    REQUIRE(output == expected);
}

TEST_CASE("minimum window substring test case 4: t not in s", "[min_window_substr]")
{
    min_window_substr::Solution sol;
    std::string input_s = "abcdef";
    std::string input_t = "xyz";
    std::string expected = "";
    auto output = sol.minWindow(input_s, input_t);
    REQUIRE(output == expected);
}

TEST_CASE("minimum window substring test case 5: s and t are the same", "[min_window_substr]")
{
    min_window_substr::Solution sol;
    std::string input_s = "aa";
    std::string input_t = "aa";
    std::string expected = "aa";
    auto output = sol.minWindow(input_s, input_t);
    REQUIRE(output == expected);
}

TEST_CASE("minimum window substring test case 6: case sensitivity", "[min_window_substr]")
{
    min_window_substr::Solution sol;
    std::string input_s = "aAbBcC";
    std::string input_t = "ABC";
    std::string expected = "AbBcC";
    auto output = sol.minWindow(input_s, input_t);
    REQUIRE(output == expected);
}

TEST_CASE("minimum window substring test case 7", "[min_window_substr]")
{
    min_window_substr::Solution sol;
    std::string input_s = "acbbaca";
    std::string input_t = "aba";
    std::string expected = "baca";
    auto output = sol.minWindow(input_s, input_t);
    REQUIRE(output == expected);
}