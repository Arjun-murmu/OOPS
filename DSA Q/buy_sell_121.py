class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        max_profit = 0
        best_buy = prices[0]

        for i in range(1,len(prices)):
            if prices[i] > best_buy:
                max_profit = max(max_profit,prices[i] - best_buy)
            best_buy = min(best_buy,prices[i])
        return max_profit
# Example usage
prices = [7, 1, 5, 3, 6, 4]
profit = Solution().maxProfit(prices)  # Output: 5 (buy at 1, sell at 6)
print("Max Profit:", profit)  # The maximum profit is 5



# class Solution(object):
#     def maxProfit(self, prices):
#         """
#         :type prices: List[int]
#         :rtype: int
#         """
#         min_price = float('inf')
#         max_profit = 0
        
#         for price in prices:
#             if price < min_price:
#                 min_price = price
#             elif price - min_price > max_profit:
#                 max_profit = price - min_price
        
#         return max_profit
    
# # Example usage
# prices = [7, 1, 5, 3, 6, 4]
# profit = Solution().maxProfit(prices)  # Output: 5 (buy at 1, sell at 6)
# print("Max Profit:", profit)  # The maximum profit is 5