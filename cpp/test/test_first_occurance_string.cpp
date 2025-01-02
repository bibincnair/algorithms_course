#include <catch2/catch_all.hpp>
#include <string>
#include "algorithms/first_occurance_string.hpp"

TEST_CASE("first occurance string", "[first_occurance_string]"){
    std::string haystack = "hello";
    std::string needle = "ll";
    int expected = 2;
    first_occurance_string::Solution sol;
    REQUIRE(sol.strStr(haystack, needle) == expected);
}   