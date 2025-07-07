class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        s = s.strip()
        # print("Trimmed string:", s)
        if not s:   # Check if the string is empty after stripping
            return 0
        words = s.split(' ')
        # print("Words in the string:", words)
        return len(words[-1]) if words else 0
    
# Example usage
s = "Hello World"
k = Solution().lengthOfLastWord(s)  # Output: 5
print("Length of last word:", k)  # The length of the last word is 5
# The time complexity is O(n) where n is the length of the input string.
# The space complexity is O(n) due to the split operation creating a list of words.
