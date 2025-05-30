#include <catch2/catch_all.hpp>
#include "algorithms/ransom_note.hpp"

TEST_CASE("ransom note test case 1", "[ransom_note]") {
    ransom_note::Solution sol;
    string ransom_note = "a";
    string magazine    = "b";
    REQUIRE(sol.canConstruct(ransom_note, magazine) == false);
}

TEST_CASE("ransom note test case 2", "[ransom_note]") {
    ransom_note::Solution sol;
    string ransom_note = "aa";
    string magazine    = "ab";
    REQUIRE(sol.canConstruct(ransom_note, magazine) == false);
}

TEST_CASE("ransom note test case 3", "[ransom_note]") {
    ransom_note::Solution sol;
    string ransom_note = "aa";
    string magazine    = "aab";
    REQUIRE(sol.canConstruct(ransom_note, magazine) == true);
}