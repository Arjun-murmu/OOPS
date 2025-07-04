# LeetCode 1 - Two Sum
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        # hashing approach
        # Time complexity: O(n)
        hash_map = {}
        for i,n in enumerate(nums):
            if target - n in hash_map:
                return [hash_map[target - n],i]
            hash_map[n] = i
        return []

nums = [2,7,11,15]
target = 9
print(Solution().twoSum(nums,target))  # Output: [0, 1]

"""The enumerate() function is a built-in Python function 
that allows you to loop through a list (or any iterable) and
 get both the index and the value at the same time."""

# nums = [10, 20, 30]

# for i, n in enumerate(nums):
#     print("Index:", i, "Value:", n)