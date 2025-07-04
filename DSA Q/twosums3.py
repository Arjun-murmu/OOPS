# LeetCode 1 - Two Sum
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
       # sorting approach
        # Time complexity: O(n log n)  
        # Space complexity: O(n)
        arr = [(val, idx) for idx, val in enumerate(nums)]  # store value and index
        # print(arr)
        arr.sort()  # sort by value
        # print(arr)

        start = 0
        end = len(arr) - 1  #len - 1 to get the last index 

        while start < end:
            sum_val = arr[start][0] + arr[end][0] # get the values from the sorted array
            # print(f"Checking indices {start} and {end}: {arr[start][0]} + {arr[end][0]} = {sum_val}")
            # print(f"Checking indices {start} and {end}: {arr[start][1]} + {arr[end][1]} = {sum_val}")
            # print(f"Checking indices {start} and {end}: {arr[start]} + {arr[end]} = {sum_val}")
            # print(f"Checking indices {start} and {end}: {arr[start][0]} + {arr[end][0]} = {sum_val}")
            # print(f"Checking indices {start} and {end}: {arr[start][1 ]} + {arr[end][1]} = {sum_val}")
            if sum_val == target:
                return [arr[start][1], arr[end][1]]  # return original indices
            elif sum_val < target:
                start += 1
            else:
                end -= 1
        return []
    
nums = [7,2,11,15]
target = 9
print(Solution().twoSum(nums,target))  # Output: [0, 1]
