class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 2
        for i in range(2,len(nums)):
            if nums[i] != nums[count-2]:
                nums[count] = nums[i]
                count += 1
        return count
                
# Example usage
nums = [1,1,1,2,2,3]
k = Solution().removeDuplicates(nums)  # Output: 4, nums = [1, 2, 3, 4, _, _]
print("nums[:k]:", nums[:k])  # The first k elements are the unique elements
# The time complexity is O(n) where n is the length of the input array.