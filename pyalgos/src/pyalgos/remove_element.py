from typing import List


class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:

        if len(nums) == 0:
            return 0

        hi = len(nums) - 1
        lo = 0

        while lo < hi:
            if nums[hi] == val:
                hi -= 1
                continue
            elif nums[lo] == val:
                nums[lo], nums[hi] = nums[hi], nums[lo]
                hi -= 1
            lo += 1

        return hi + 1 if nums[hi] == val else hi + 1
