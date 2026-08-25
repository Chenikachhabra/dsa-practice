class Solution(object):
    def maxProfit(self, prices):
        
        minprice = float( 'inf')
        maxprofit  = 0

        for price in prices :
            if price < minprice:
                minprice = price
            
            else:
                profit = price - minprice
                if profit > maxprofit :
                    maxprofit = profit
        
        return maxprofit
                

        