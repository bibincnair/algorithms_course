#include <algorithms/length_last_word.hpp>
#include <catch2/catch_all.hpp>
#include <string>
using std::string;

TEST_CASE("Length of last word", "[test case]")
{
  SECTION("Length of last word test case 1")
  {
    string s = "Hello World";
    length_last_word::Solution solution;
    REQUIRE(solution.lengthOfLastWord(s) == 5);
  }

  SECTION("Length of last word test case 2")
  {
    string s = "Hello";
    length_last_word::Solution solution;
    REQUIRE(solution.lengthOfLastWord(s) == 5);
  }

  SECTION("Length of last word test case 3")
  {
    string s = "Hello ";
    length_last_word::Solution solution;
    REQUIRE(solution.lengthOfLastWord(s) == 5);
  }
}