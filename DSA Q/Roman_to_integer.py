class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        roman_numerals = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }

        total = 0
        p_value = 0

        for char in s:
            value = roman_numerals[char]
            if value > p_value:
                total = total + value - 2 * p_value
            else:
                total = total + value
            p_value = value
        return total
    
# Example usage
s = "MCMXCIV"
result = Solution().romanToInt(s)  # Output: 1994
print("Integer value of Roman numeral:", result)  # The integer value is 1994
# Example usage
# s = "LVIII"
# result = Solution().romanToInt(s)  # Output: 58
# print("Integer value of Roman numeral:", result)  # The integer value is 58
