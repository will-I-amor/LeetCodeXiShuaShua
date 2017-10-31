class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        if (len(prices)==0 or len(prices)==1): return 0
        b = []
        for i in range(len(prices)-1):
            j = i+1
            res = prices[j]-prices[i]
            b.append(res)
        cha = 0
        for j in b:
            if j>0:
                cha+=j
        return cha
