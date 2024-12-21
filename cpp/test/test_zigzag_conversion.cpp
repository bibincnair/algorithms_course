#include <catch2/catch_all.hpp>
#include <string>
#include "algorithms/zigzag_conversion.hpp"

TEST_CASE("zigzag conversion", "[zigzag]"){
    std::string s = "PAYPALISHIRING";
    int numRows = 3;
    std::string expected = "PAHNAPLSIIGYIR";
    longest_common_prefix::Solution sol;
    REQUIRE(sol.convert(s, numRows) == expected);
}