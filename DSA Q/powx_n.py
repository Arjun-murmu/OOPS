#this is a solution for LeetCode problem 50: Pow(x, n)
#This problem solution use by the binary exponentiation method.
#The time complexity is O(log n) where n is the absolute value of the exponent.
#The space complexity is O(1) since we are using only a constant amount of extra space.
#This method is efficient for large values of n, as it reduces the number of multiplications
class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        if n == 0:
            return 1.0
        if x == 0:
            return 0.0
        if x == 1:
            return 1.0
        if x == -1 and n%2 == 0:
            return 1.0
        if x == -1 and n%2 != 0:
            return -1.0
            
        BinForm = n
        if n < 0:
            x = 1/x
            BinForm = -BinForm
        answer = 1
        while BinForm > 0:
            if BinForm%2 == 1:
                answer *= x
            x *= x
            BinForm /= 2
        return answer

# Example usage
x = 2.00000
n = 10
result = Solution().myPow(x, n)  # Output: 1024.0
print("Result:", result)  # The result is 1024.0

# Output
# 1024.00000
# Expected
# 1024.00000

class Solution(object):
    def myPow(self, x, n):
        """
        :type x: float
        :type n: int
        :rtype: float
        """
        if n == 0:
            return 1.0
        if x == 0:
            return 0.0
        if x == 1:
            return 1.0
        if x == -1 and n % 2 == 0:
            return 1.0
        if x == -1 and n % 2 != 0:
            return -1.0
            
        BinForm = n
        if n < 0:
            x = 1 / x
            BinForm = -BinForm
        answer = 1
        while BinForm > 0:
            if BinForm % 2 == 1:
                answer *= x
            x *= x
            BinForm //= 2
        return answer
    
# Example usage
x = 2.00000 
n = 10
result = Solution().myPow(x, n)  # Output: 1024.0
print("Result:", result)  # The result is 1024.0
# Output
# 1024.00000
# Expected
# 1024.00000