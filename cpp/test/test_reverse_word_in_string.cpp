#include <algorithms/reverse_word_in_string.hpp>
#include <catch2/catch_all.hpp>
#include <string>
using std::string;

TEST_CASE("reverse word in string test case", "[reverse_word_in_string]")
{
  reverse_word_in_string::Solution sol;
  SECTION("test case 1")
  {
    string s = "the sky is blue";
    string expected = "blue is sky the";
    REQUIRE(sol.reverseWords(s) == expected);
  }
  SECTION("test case 2")
  {
    string s = "  hello world  ";
    string expected = "world hello";
    REQUIRE(sol.reverseWords(s) == expected);
  }
  SECTION("test case 3")
  {
    string s = "a good   example";
    string expected = "example good a";
    REQUIRE(sol.reverseWords(s) == expected);
  }
  SECTION("test case 4")
  {
    string s = "  Bob    Loves  Alice   ";
    string expected = "Alice Loves Bob";
    REQUIRE(sol.reverseWords(s) == expected);
  }
  SECTION("test case 5")
  {
    string s = "Alice does not even like bob";
    string expected = "bob like even not does Alice";
    REQUIRE(sol.reverseWords(s) == expected);
  }
}