#include "algorithms/text_justification.hpp"
#include <catch2/catch_all.hpp>
#include <string>
#include <vector>

TEST_CASE("text justification", "[text_justification]")
{
  std::vector<std::string> words = { "This", "is", "an", "example", "of", "text", "justification." };
  int maxWidth = 16;
  std::vector<std::string> expected = { "This    is    an", "example  of text", "justification.  " };
  text_justification::Solution sol;
  REQUIRE(sol.fullJustify(words, maxWidth) == expected);
}