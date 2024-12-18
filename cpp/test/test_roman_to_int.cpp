#include <algorithms/roman_to_int.hpp>
#include <catch2/catch_all.hpp>
#include <string>
using std::string;

TEST_CASE("roman to int", "[roman_to_int]")
{
  SECTION("roman to int test case 1")
  {
    string s = "III";
    roman_to_int::Solution solution;
    REQUIRE(solution.romanToInt(s) == 3);
  }

  SECTION("roman to int test case 2")
  {
    string s = "IV";
    roman_to_int::Solution solution;
    REQUIRE(solution.romanToInt(s) == 4);
  }

  SECTION("roman to int test case 3")
  {
    string s = "IX";
    roman_to_int::Solution solution;
    REQUIRE(solution.romanToInt(s) == 9);
  }

  SECTION("roman to int test case 4")
  {
    string s = "LVIII";
    roman_to_int::Solution solution;
    REQUIRE(solution.romanToInt(s) == 58);
  }

  SECTION("roman to int test case 5")
  {
    string s = "MCMXCIV";
    roman_to_int::Solution solution;
    REQUIRE(solution.romanToInt(s) == 1994);
  }
}