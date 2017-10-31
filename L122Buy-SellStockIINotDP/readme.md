    Say you have an array for which the ith element is the price of a given stock on day i.

    Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
    
    这道题是可以做n次transaction，不是只有121的1次了。很多次交易。
    
    [7,1,5,3,6,4]我们把这个数组相邻的2项相减，得到数组[-6,4,-2,3,-2],取这里面的正数相加，就可以了
