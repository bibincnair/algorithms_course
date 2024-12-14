#include <catch2/catch_test_macros.hpp>
#include "algorithms/merge_sorted_array.hpp"

#include <vector>
using std::vector;

TEST_CASE("Merge Sorted Array", "test1"){

    vector nums1 = {1,2,3,0,0,0};
    vector nums2 = {2,5,6};
    merge_sorted_array::Solution sol;
    sol.merge(nums1, 3, nums2, 3);
    REQUIRE(nums1 == vector{1,2,2,3,5,6});
}