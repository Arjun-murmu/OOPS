class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        candidate = None
        
        for num in nums:
            if count == 0:
                candidate = num
            if num == candidate:
                count += 1
            else:
                count -= 1
        return candidate
# Example usage
nums = [3, 2, 3]
k = Solution().majorityElement(nums)  # Output: 3
print("Majority element:", k)  # The majority element is 3
# The time complexity is O(n) where n is the length of the input array.
# The space complexity is O(1) since we are using only a constant amount of extra space.