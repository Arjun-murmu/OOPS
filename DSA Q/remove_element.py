class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        k = 0
        for i in range(len(nums)):
            if nums[i] != val:
                nums[k] = nums[i]
                k += 1
        return k   
# Example usage
nums = [3, 2, 2, 3]
val = 3
k = Solution().removeElement(nums, val) # Output: 2, nums = [2, 2, _, _] (where _ represents unused elements)
print("nums[:k]:", nums[:k]) 
# The time complexity is O(n) where n is the length of the input array.
# The space complexity is O(1) since we are modifying the array in place