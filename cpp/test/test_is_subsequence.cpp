#include <catch2/catch_all.hpp>
#include "algorithms/is_subsequnce.hpp"

TEST_CASE("isSubsequence basic tests", "[isSubsequence]") {
    SECTION("Example 1: s = 'abc', t = 'ahbgdc'") {
        std::string s = "abc";
        std::string t = "ahbgdc";
        is_subsequence::Solution sol;
        REQUIRE(sol.isSubsequence(s, t) == true);
    }

    SECTION("Example 2: s = 'axc', t = 'ahbgdc'") {
        std::string s = "axc";
        std::string t = "ahbgdc";
        is_subsequence::Solution sol;
        REQUIRE(sol.isSubsequence(s, t) == false);
    }
}

TEST_CASE("isSubsequence edge cases", "[isSubsequence]") {
    SECTION("Empty s and t") {
        std::string s = "";
        std::string t = "";
        is_subsequence::Solution sol;
        REQUIRE(sol.isSubsequence(s, t) == true);
    }

    SECTION("Empty s, non-empty t") {
        std::string s = "";
        std::string t = "ahbgdc";
        is_subsequence::Solution sol;
        REQUIRE(sol.isSubsequence(s, t) == true);
    }

    SECTION("Non-empty s, empty t") {
        std::string s = "abc";
        std::string t = "";
        is_subsequence::Solution sol;
        REQUIRE(sol.isSubsequence(s, t) == false);
    }

    SECTION("s longer than t") {
        std::string s = "abcdef";
        std::string t = "abc";
        is_subsequence::Solution sol;
        REQUIRE(sol.isSubsequence(s, t) == false);
    }

    SECTION("s and t are identical") {
        std::string s = "abc";
        std::string t = "abc";
        is_subsequence::Solution sol;
        REQUIRE(sol.isSubsequence(s, t) == true);
    }

    SECTION("s is a single character, t contains it") {
        std::string s = "a";
        std::string t = "ahbgdc";
        is_subsequence::Solution sol;
        REQUIRE(sol.isSubsequence(s, t) == true);
    }

    SECTION("s is a single character, t does not contain it") {
        std::string s = "z";
        std::string t = "ahbgdc";
        is_subsequence::Solution sol;
        REQUIRE(sol.isSubsequence(s, t) == false);
    }
}
