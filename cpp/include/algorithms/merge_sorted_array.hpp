#include <vector>
using std::vector;

namespace merge_sorted_array {

class Solution
{
public:
  static void merge(vector<int> &nums1, int m, const vector<int> &nums2, int n)
  {
    if (n == 0) return;

    std::size_t i = m;
    std::size_t j = n;
    std::size_t k = m + n;

    while (i > 0 && j > 0) {
      if (nums1[i - 1] > nums2[j - 1]) {
        nums1[k - 1] = nums1[i - 1];
        i--;
      } else {
        nums1[k - 1] = nums2[j - 1];
        j--;
      }
      k--;
    }

    // Copy any remaining elements from nums2
    while (j > 0) {
      nums1[k - 1] = nums2[j - 1];
      j--;
      k--;
    }
  }
};
}// namespace merge_sorted_array
