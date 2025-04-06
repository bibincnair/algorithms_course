#include "algorithms/valid_palindrome.hpp"
#include <catch2/catch_all.hpp>
#include <catch2/catch_test_macros.hpp>

TEST_CASE("valid_palindrome valid", "valid inputs")
{
  valid_palindrome::Solution sol;
  SECTION("Example 1")
  {
    std::string s = "A man, a plan, a canal: Panama";
    REQUIRE(sol.isPalindrome(s) == true);
  }

  SECTION("Example 2")
  {
    std::string s = "race a car";
    REQUIRE(sol.isPalindrome(s) == false);
  }

  SECTION("Example 3")
  {
    std::string s = " ";
    REQUIRE(sol.isPalindrome(s) == true);
  }
}

TEST_CASE("valid_palindrome invalid", "invalid inputs")
{
  valid_palindrome::Solution sol;
  std::string s =
    "''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"
    "''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"
    "''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"
    "''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''"
    "''''''''''''''''''''''''''''''";
    REQUIRE(sol.isPalindrome(s) == true);
}