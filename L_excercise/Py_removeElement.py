/**
 * Note:  Remove Element
 */
class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        j = 0 
        for i in range(len(nums)):
            if nums[j] == val:
                nums.pop(j)
            else:
                j += 1
        return len(nums)
