#include <catch2/catch_all.hpp>
#include <catch2/catch_test_macros.hpp>
#include "algorithms/concat_all_words.hpp"

TEST_CASE("concat all substring test case 1", "[concat_all_substr]"){
    string s("barfoothefoobarman");
    vector<string> words = {"foo","bar"};
    concat_all_substr::Solution sol;
    auto result = sol.findSubstring(s, words);
    vector<int> expected = {0, 9};
    REQUIRE(result == expected);
}

TEST_CASE("concat all substring test case 2", "[concat_all_substr]"){
    string s("wordgoodgoodgoodbestword");
    vector<string> words = {"word","good","best","word"};
    concat_all_substr::Solution sol;
    auto result = sol.findSubstring(s, words);
    vector<int> expected = {};
    REQUIRE(result == expected);
}

TEST_CASE("concat all substring test case 3", "[concat_all_substr]"){
    string s("barfoofoobarthefoobarman");
    vector<string> words = {"bar","foo","the"};
    concat_all_substr::Solution sol;
    auto result = sol.findSubstring(s, words);
    vector<int> expected = {6, 9, 12};
    REQUIRE(result == expected);
}

TEST_CASE("concat all substring test case 4", "[concat_all_substr]"){
    string s("mississippi");
    vector<string> words = {"mississippis"};
    concat_all_substr::Solution sol;
    auto result = sol.findSubstring(s, words);
    vector<int> expected = {};
    REQUIRE(result == expected);
}