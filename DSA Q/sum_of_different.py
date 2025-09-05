def compareBits(a, b):
    n, m = len(a), len(b)
    total_diff = 0
    
    # Loop through all substrings of b with length equal to a
    for i in range(m - n + 1):
        sub = b[i:i+n]   # slicing
        # Compare with a
        for j in range(n):
            if a[j] != sub[j]:
                total_diff += 1
    
    return total_diff


if __name__ == '__main__':
    a = input().strip()
    b = input().strip()
    print(compareBits(a, b))

# Testcase Input
# 01
# 00111
# Testcase Output
# 3
# Explanation
# The substrings of b of length 2 (length of a) are: '00', '01', '11', '11'

# Comparing a = 01 with each substring:
# 01 vs 00 has 1 differing bits.
# 01 vs 01 has 0 differing bit.
# 01 vs 11 has 1 differing bit.
# 01 vs 11 has 1 differing bit.
# Total differing bits = 1 + 0 + 1 + 1 = 3