#include <catch2/catch_all.hpp>
#include "algorithms/isomorphic_strings.hpp"

TEST_CASE("isomorphic string test case 1", "[isomorphic_string]"){
    isomorphic_strings::Solution sol;
    string s = "egg";
    string t = "add";
    REQUIRE(sol.isIsomorphic(s, t) == true);
}

TEST_CASE("isomorphic string test case 2", "[isomorphic_string]"){
    isomorphic_strings::Solution sol;
    string s = "foo";
    string t = "bar";
    REQUIRE(sol.isIsomorphic(s, t) == false);
}

TEST_CASE("isomorphic string test case 3", "[isomorphic_string]"){
    isomorphic_strings::Solution sol;
    string s = "paper";
    string t = "title";
    REQUIRE(sol.isIsomorphic(s, t) == true);
}